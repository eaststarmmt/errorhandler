%{
#include <stdio.h>
#include "example.tab.h"
#include <string.h>
FILE *yyin;
int count = 0;		//for function_parameter count
int count_check=0;
static char *err_msg = "Wrong!";
#define FALSE 0
#define TRUE 1

typedef struct for_stack{
char *type;
}for_stack;

#define MAX_SIZE 10
for_stack main_stack[MAX_SIZE];  // 스택의 긴 통
for_stack temp;               // temp str used for main stack
int top;                     // 스택의 상단
char *current_type = "";
int is_return = 0;

struct sym_tab{
char *name;
// int ival;
char *type;
int layer;
int has_value;
}sym_tab[30];


struct sym_tab_2{
char *name;
char *type;
int count;
}sym_tab_2[30];

void look();
void look2();

struct sym_tab *insert();
 
struct sym_tab_2 *insert2();

// layer = main_stack[top];
// 
%}

%union{
	double value;
	struct sym_tab *symp;
	char *name;
	int  Ival;
}

%token	<name> IDENTIFIER
%token LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN ADD_ASSIGN
%token SEM
%token <name> INT <name> FLOAT
%token I_F EL_SE EL_IF WH_ILE F_OR RE_TURN
%token MAINPROG FUNCTION PROCEDURE END THEN NOP PRINT I_N BEG
%token <Ival> Integer <value> Float
%token CHUNG_OPEN CHUNG_CLOSE COMMMA CO_LON EQ_UAL SO_OPEN SO_CLOSE DAE_OPEN DAE_CLOSE FULL_STOP MI_NUS PL_US MU_LTIPLE DI_VIDE SMALLER LARGER EXCLAMATION ST_RING
%type <name> standard_type identifier_list type
%%

// program : MAINPROG IDENTIFIER SEM declarations subprogram_declarations compound_statement;
program : MAINPROG IDENTIFIER SEM declarations subprogram_declarations compound_statement;

declarations : type{current_type=strdup($1);} identifier_list SEM{
		} declarations
		| epsilon;

epsilon : %empty;

identifier_list :  IDENTIFIER EQ_UAL expression{insert(current_type,strdup($1)); look_and_set_value($1); }
	| IDENTIFIER{insert(current_type,$1);printf("\n\t");} COMMMA identifier_list
	| IDENTIFIER{insert(current_type,$1);};

identifier_list_for_parameter : IDENTIFIER{count++;} COMMMA identifier_list_for_parameter
	| IDENTIFIER{count++;};

type : standard_type{$$=$1;} | standard_type DAE_OPEN Integer DAE_CLOSE{};

standard_type : INT{$$=$1;} 
		| FLOAT{$$=$1;};

subprogram_declarations : subprogram_declaration subprogram_declarations
		| epsilon;

subprogram_declaration : subprogram_head declarations compound_statement{if(is_return==0)yyerror("No return!"); is_return=0;};

subprogram_head : FUNCTION IDENTIFIER arguments CO_LON standard_type SEM{
		insert2($5,$2);} 
		| PROCEDURE IDENTIFIER arguments SEM{
		insert2("null", $2);};

arguments : SO_OPEN parameter_list SO_CLOSE 
		| epsilon;

parameter_list : identifier_list_for_parameter CO_LON type
		| identifier_list_for_parameter CO_LON type SEM parameter_list;

compound_statement : BEG statement_list END;

statement_list : statement
		| statement statement_list;

statement : NOP
		| IDENTIFIER EQ_UAL expression SEM{look_and_set_value($1);}
		| variable EQ_UAL expression SEM
		| print_statement SEM
		| compound_statement 
		| if_statement 
		| while_statement
		| for_statement 
		| RE_TURN Integer SEM{is_return++; if(strcmp(main_stack[top].type,"int")){yyerror("Wrong return type");}}
		| RE_TURN Float SEM{is_return++; if(strcmp(main_stack[top].type,"float")){yyerror("Wrong return type");}}
		| RE_TURN expression SEM{is_return++;}
		| procedure_statement SEM;

if_statement : I_F expression CO_LON statement
		|I_F expression CO_LON statement else_if_statement
		|I_F expression CO_LON statement EL_SE CO_LON expression
		|I_F expression CO_LON statement else_if_statement EL_SE CO_LON expression;
		

else_if_statement :SO_OPEN EL_IF expression CO_LON statement SO_CLOSE
		|else_if_statement SO_OPEN EL_IF expression CO_LON statement SO_CLOSE;



while_statement : WH_ILE expression CO_LON statement DAE_OPEN EL_SE CO_LON statement DAE_CLOSE;

for_statement : F_OR SO_OPEN expression SO_CLOSE I_N expression CO_LON statement DAE_OPEN EL_SE CO_LON statement DAE_CLOSE;


print_statement : PRINT 
		//| PRINT SO_OPEN "\"" expression "\"" SO_CLOSE
		| PRINT SO_OPEN expression SO_CLOSE;

/*
variable : IDENTIFIER 
		| IDENTIFIER DAE_OPEN expression DAE_CLOSE;
*/

variable : IDENTIFIER{look($1); has_value($1);}
		| IDENTIFIER DAE_OPEN factor DAE_CLOSE
		| IDENTIFIER DAE_OPEN danger;

// (9) array index value warning
danger :procedure_statement DAE_CLOSE{printf(" <-- WARNING: procedure used as an array index");}
		| EXCLAMATION factor DAE_CLOSE{printf(" <-- WARNING: '!' operator used as an array index");}
		| sign factor DAE_CLOSE{printf(" <-- WARNING: sign operator used as an array index");}
		| factor DBZ DAE_CLOSE{printf(" <-- WARNING: mul/div operation used as an array index");}
		| term addop simple_expression DAE_CLOSE{printf(" <-- WARNING: add/sub operation used as an array index");}
		| simple_expression relop simple_expression DAE_CLOSE{printf(" <-- WARNING: relational operation used as an array index");};

procedure_statement : IDENTIFIER SO_OPEN actual_parameter_expression SO_CLOSE{look2($1); check_func_param_num($1);};

actual_parameter_expression : expression_list
		| epsilon;

expression_list : expression{count_check++;} 
		| expression{count_check++;} COMMMA expression_list;

expression : simple_expression 
		| simple_expression relop simple_expression;

simple_expression : term
		| term addop simple_expression;

/* NOTE THE ABOVE GRAMMAR HAS BEEN CHANGED */
term : factor
		|factor DBZ;

DBZ: MU_LTIPLE term
		|DI_VIDE term                      // (runtime 1) divide by zero error
		|DI_VIDE Integer{if($2==0) {printf(" <--DIVIDE BY ZERO!");}}
		|DI_VIDE Float{if($2==0.0||$2==0) {printf(" <--DIVIDE BY ZERO!");}};

factor : Integer 
		| Float 
		| procedure_statement
		| EXCLAMATION factor
		| sign factor
		| ST_RING
		| variable
/* NOTE THE ABOVE GRAMMAR HAS BEEN CHANGED */
sign : PL_US | MI_NUS;
relop : LARGER | GE_OP | SMALLER | LE_OP | EQ_OP | NE_OP | I_N;
addop : PL_US | MI_NUS;
multop : MU_LTIPLE | DI_VIDE;

%%
void has_value(char *s) // (2) undeclared variable checker
{
	struct sym_tab *sp;
	for(sp =sym_tab; sp< &sym_tab[30]; sp++){
		if (!sp-> name){
			break;
		}
		if(sp->name && !strcmp(sp->name, s) && (sp->layer == 0||sp->layer ==top)){
			if(sp->has_value == 0)
				yyerror("undeclared variable!");
			return;
		}
	}
}

void look_and_set_value(char *s) // (2) set variable has_value
{	
	struct sym_tab *sp;
	for(sp =sym_tab; sp< &sym_tab[30]; sp++){
		if (!sp-> name){
			break;
		}
		if(sp->name && !strcmp(sp->name, s) && (sp->layer == 0||sp->layer ==top)){
			sp->has_value = 1;
			return;
		}
	}
}

void look(char *s) // (1) undefined variable checker
{	
	struct sym_tab *sp;
	int exist = 0;
	for(sp =sym_tab; sp< &sym_tab[30]; sp++){
		if (!sp-> name){
			break;
		}
		if(sp->name && !strcmp(sp->name, s) && (sp->layer == 0||sp->layer ==top)){
			// printf("\n v_name : %s %s",t,s);
			exist = 1;
			return ;
		}
	}
	if(exist==0){
		yyerror("no variable!");	
	}
}

struct sym_tab *insert(char *t, char *s) // (3) duplicate variable checker when inserting to sym table
{	
	struct sym_tab *sp;

	for(sp =sym_tab; sp< &sym_tab[30]; sp++){
		
		if(sp->name && !strcmp(sp->name, s) && sp->layer == top) {
			printf("\n v_name_dup : %s %s",t,s);
			yyerror("duplicate variable!"); 
			return sp;
			}
	
		if (!sp-> name){
			printf("\n v_name_insert : %s %s",t,s);
			printf("\n %s");
			sp->name =s;
			sp->type = t;
			sp->layer = top;
			sp->has_value = 0;
			return sp;
		}
	}
yyerror("No variance or Too many");
exit(1);
}

void check_func_param_num(char *s) // (5) function parameter number checker
{
	struct sym_tab_2 *sp;
	for(sp =sym_tab_2; sp< &sym_tab_2[30]; sp++){
		if (!sp-> name){
			break;
		}
		if(sp->name && !strcmp(sp->name, s)){
			// printf("\n v_name : %s %s",t,s);
			if(sp->count!=count_check){
				yyerror("No Match parameter count!");
			}
			return ;
		}
	}
	
}

void look2(char *s) // (4) defined function checker when calling
{	
	struct sym_tab_2 *sp;
	int exist = 0;
	for(sp =sym_tab_2; sp< &sym_tab_2[30]; sp++){
		if (!sp-> name){
			break;
		}
		if(sp->name && !strcmp(sp->name, s)){
			// printf("\n v_name : %s %s",t,s);
			exist = 1;
			return ;
		}
	}
	if(exist==0){
		yyerror("no function!");	
	}
}

struct sym_tab_2 *insert2(char *t, char *s) // (7) duplicate function checker when inserting to sym table
{
	struct sym_tab_2 *sp;
	printf("\n parameter count : %d",count);
	for(sp =sym_tab_2; sp< &sym_tab_2[30]; sp++){
		if(sp->name && !strcmp(sp->name, s)) {
			printf("\n f_name : %s %s",t,s);
			yyerror("duplicate function!");
			return sp; // returns already declared function
			}
		if (!sp-> name){
			printf("\n f_name : %s %s",t,s);
			sp->name =strdup(s);
			sp->type = strdup(t);
			sp->count = count;
			count=0;
			temp.type = strdup(t);
			push(temp);
			return sp; // returns new declared function
		}
	}
yyerror("No variance or Too many");
exit(1);
}

void init_stack () { 
    top = -1;
}

void push(struct for_stack fs) {
    if (top >= MAX_SIZE - 1) {
        printf("\n   Stack Overflow\n");
        return -1;
    }
    main_stack[++top] = fs;
}

void pop(void) {
    top--;
}

void yyerror(char *s) {
	printf(" <-- %s\n",s);
	// printf("count : %d", count);
}

int main(void) {
	init_stack();
	temp.type = strdup("main");
	main_stack[++top] = temp;

	yyin = fopen("test.c", "r");
	yyparse();
	fclose(yyin);
	// printf("count : %d", count);
	return 0;
}
