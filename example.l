DIGIT			[0-9]
Letter			[a-zA-Z_]
Float			[0-9]+(\.[0-9]+)?
ID                      [Letter] ([Letter] | [DIGIT])*
Operator 		+ | - | * | / | < | <= | >= | > | == | != | !
Delimiter 		; | . | , | = | ( | ) | [ | ] | :
Whitespace 		[\t]+ | [\t] | \n | //

%{
#include "example.tab.h"


%}

%%
"/*"			{printf("comment1"); comment(); }
"//"[^\n]*              {printf("comment2"); /* consume //-comment */ }

"else"			{printf("else");return(EL_SE);}
"float"			{yylval.name = strdup(yytext); printf("float");return(FLOAT);} 
"for"			{printf("for");return(F_OR); }
"if"			{printf("if");return(I_F);}
"elif"			{printf("elif");return(EL_IF);}
"int"			{yylval.name = strdup(yytext); printf("int");  return(INT); }
"return"		{printf("return");return(RE_TURN);}
"while"			{printf("while");return(WH_ILE);}
"mainprog"              {printf("mainprog");return(MAINPROG);}
"function"              {printf("function");return(FUNCTION);}
"procedure"             {printf("procedure");return(PROCEDURE);}
"begin"			{printf("BEG"); return(BEG);}
"end"                   {printf("end");return(END);}
"then"                  {printf("then");return(THEN);}
"nop"                   {printf("nop");return(NOP);}
"print"			{printf("print");return(PRINT);}
"in"			{printf("in");return(I_N);}

{Letter}({Letter}|{DIGIT})*		{
yylval.name =strdup(yytext);printf("IDENTIFIER");return(IDENTIFIER);}
{DIGIT}+	 	{
yylval.value = atoi(yytext);printf("Integer");return(Integer);}
{Float}			{printf("Float");return(Float);}
L?\"(\\.|[^\\"])*\" {printf("String");return(ST_RING);}

"<="			{printf("<=");return(LE_OP);}
">="			{printf(">=");return(GE_OP);}
"=="			{printf("==");return(EQ_OP);}
"!="			{printf("!=");return(NE_OP);}
";"			{printf(";");return(SEM);}
("{"|"<%")		{printf("{");return(CHUNG_OPEN);}
("}"|"%>")		{printf("}");return(CHUNG_CLOSE);}
","			{ printf(",");return(COMMMA);}
":"			{printf(":");return(CO_LON);}
"="			{printf("=");return(EQ_UAL);}
"("			{printf("(");return(SO_OPEN);}
")"			{printf(")");return(SO_CLOSE);}
("["|"<:")		{printf("[");return(DAE_OPEN);}
("]"|":>")		{printf("]");return(DAE_CLOSE);}
"."			{printf(".");return(FULL_STOP);}
"-"			{printf("-");return(MI_NUS);}
"+"			{printf("+");return(PL_US);}
"*"			{printf("*");return(MU_LTIPLE);}
"/"			{printf("/");return(DI_VIDE);}
"<"			{printf("<");return(SMALLER);}
">"			{printf(">");return(LARGER);}
"!"			{printf("!");return(EXCLAMATION);}

%%

int yywrap(void)
{
	return 1;
}

void comment(void)
{
	char c, prev = 0;
  
	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	error("unterminated comment");
}
