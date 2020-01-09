/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "example.y" /* yacc.c:339  */

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

#line 114 "example.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "example.tab.h".  */
#ifndef YY_YY_EXAMPLE_TAB_H_INCLUDED
# define YY_YY_EXAMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    LE_OP = 259,
    GE_OP = 260,
    EQ_OP = 261,
    NE_OP = 262,
    AND_OP = 263,
    OR_OP = 264,
    MUL_ASSIGN = 265,
    DIV_ASSIGN = 266,
    ADD_ASSIGN = 267,
    SEM = 268,
    INT = 269,
    FLOAT = 270,
    I_F = 271,
    EL_SE = 272,
    EL_IF = 273,
    WH_ILE = 274,
    F_OR = 275,
    RE_TURN = 276,
    MAINPROG = 277,
    FUNCTION = 278,
    PROCEDURE = 279,
    END = 280,
    THEN = 281,
    NOP = 282,
    PRINT = 283,
    I_N = 284,
    BEG = 285,
    Integer = 286,
    Float = 287,
    CHUNG_OPEN = 288,
    CHUNG_CLOSE = 289,
    COMMMA = 290,
    CO_LON = 291,
    EQ_UAL = 292,
    SO_OPEN = 293,
    SO_CLOSE = 294,
    DAE_OPEN = 295,
    DAE_CLOSE = 296,
    FULL_STOP = 297,
    MI_NUS = 298,
    PL_US = 299,
    MU_LTIPLE = 300,
    DI_VIDE = 301,
    SMALLER = 302,
    LARGER = 303,
    EXCLAMATION = 304,
    ST_RING = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 49 "example.y" /* yacc.c:355  */

	double value;
	struct sym_tab *symp;
	char *name;
	int  Ival;

#line 212 "example.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EXAMPLE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "example.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    71,    71,    71,    73,    75,    77,    78,
      78,    79,    81,    81,    82,    84,    84,    86,    87,    89,
      90,    92,    94,    96,    99,   100,   102,   103,   105,   107,
     108,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   123,   124,   125,   126,   129,   130,   134,
     136,   139,   141,   148,   149,   150,   153,   154,   155,   156,
     157,   158,   160,   162,   163,   165,   166,   166,   168,   169,
     171,   172,   175,   176,   178,   179,   180,   181,   183,   184,
     185,   186,   187,   188,   189,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   193,   193
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN",
  "SEM", "INT", "FLOAT", "I_F", "EL_SE", "EL_IF", "WH_ILE", "F_OR",
  "RE_TURN", "MAINPROG", "FUNCTION", "PROCEDURE", "END", "THEN", "NOP",
  "PRINT", "I_N", "BEG", "Integer", "Float", "CHUNG_OPEN", "CHUNG_CLOSE",
  "COMMMA", "CO_LON", "EQ_UAL", "SO_OPEN", "SO_CLOSE", "DAE_OPEN",
  "DAE_CLOSE", "FULL_STOP", "MI_NUS", "PL_US", "MU_LTIPLE", "DI_VIDE",
  "SMALLER", "LARGER", "EXCLAMATION", "ST_RING", "$accept", "program",
  "declarations", "$@1", "$@2", "epsilon", "identifier_list", "$@3",
  "identifier_list_for_parameter", "$@4", "type", "standard_type",
  "subprogram_declarations", "subprogram_declaration", "subprogram_head",
  "arguments", "parameter_list", "compound_statement", "statement_list",
  "statement", "if_statement", "else_if_statement", "while_statement",
  "for_statement", "print_statement", "variable", "danger",
  "procedure_statement", "actual_parameter_expression", "expression_list",
  "$@5", "expression", "simple_expression", "term", "DBZ", "factor",
  "sign", "relop", "addop", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -103

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-103)))

#define YYTABLE_NINF -80

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    15,    11,     9,  -103,    59,  -103,  -103,    23,  -103,
    -103,   -13,    27,    68,  -103,    47,    23,    59,    81,    64,
      52,    52,    99,  -103,  -103,    47,    -1,    90,    69,   111,
    -103,    88,   112,    32,     6,     6,    92,    10,  -103,    93,
    -103,   103,    99,  -103,  -103,  -103,   119,    96,   121,  -103,
       6,   101,  -103,  -103,   102,   106,    98,    59,  -103,     6,
       6,    48,     5,  -103,  -103,  -103,  -103,     6,  -103,  -103,
    -103,   107,    28,    56,    63,     6,   108,     6,   126,   133,
     134,     6,  -103,  -103,  -103,     6,  -103,  -103,    81,    59,
     115,    59,  -103,   139,   140,  -103,   116,  -103,   122,     6,
    -103,   113,    28,    56,    17,     6,  -103,    99,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,     6,  -103,  -103,     6,     6,
      62,  -103,  -103,    99,   117,  -103,  -103,  -103,   120,   145,
    -103,  -103,   111,   147,  -103,  -103,  -103,   132,   127,  -103,
       6,     6,  -103,   129,   130,    -7,  -103,  -103,  -103,    71,
      77,  -103,   135,   144,  -103,  -103,  -103,   111,     6,  -103,
     136,   137,  -103,  -103,   138,   162,     2,   164,     6,  -103,
    -103,  -103,  -103,     6,     6,   146,   165,   148,   149,  -103,
     150,     6,     6,    99,    99,    99,  -103,   151,   152,   154,
     153,    99,  -103,   171,  -103,   156,   155,  -103,    99,   157,
    -103
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    17,    18,     7,     6,
       3,    15,     0,     0,    20,     0,     7,     7,     0,     0,
       7,     7,     0,     2,    19,     0,     9,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    31,    51,
      35,     0,    29,    36,    37,    38,     0,     0,     0,    21,
       0,     0,     4,    16,    12,     0,     0,     0,    23,     0,
       7,     0,    53,    78,    79,    86,    85,     0,    83,    84,
      80,     0,    68,    70,    72,     0,     0,     0,    78,    79,
       0,     0,    28,    30,    34,     0,    42,     8,     0,     7,
       0,     0,    24,     0,     0,    64,     0,    63,    65,     0,
      55,    80,     0,    70,    72,     0,    81,     0,    90,    88,
      91,    92,    93,    89,    87,     0,    95,    94,     0,     0,
       0,    73,    82,     0,     0,    39,    40,    41,     0,     0,
      10,     5,     0,    26,    22,    32,    62,     0,    81,    56,
       0,     0,    54,    73,    82,    43,    69,    71,    74,    76,
      77,    75,     0,     0,    52,    33,    13,     0,     0,    57,
       0,    71,    59,    58,     0,     0,    44,     0,     0,    27,
      67,    61,    60,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,    49,     0,    47,     0,     0,    48,     0,     0,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,   -11,  -103,  -103,     8,   109,  -103,    57,  -103,
     105,   142,   174,  -103,  -103,   179,    44,     0,   160,  -102,
    -103,  -103,  -103,  -103,  -103,   -19,  -103,   -22,  -103,    45,
    -103,   -33,   -54,   -53,   100,    46,   158,   104,   110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    18,    89,     9,    27,    51,    55,    90,
      10,    11,    15,    16,    17,    31,    56,    40,    41,    42,
      43,   166,    44,    45,    46,    69,   100,    70,    96,    97,
     137,    98,    72,    73,   121,    74,    75,   115,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    71,    76,    47,    80,   145,    25,   102,   103,    62,
     164,     4,   -11,    62,     1,    23,    14,    87,     3,   175,
      48,   152,     5,    47,    14,    49,    94,    19,    30,    30,
      20,   165,   108,   109,   110,   111,    50,    63,    64,   101,
     176,    78,    79,    60,   124,    61,    12,    13,   128,    65,
      66,    62,   129,    65,    66,    67,    68,   112,   142,    67,
      68,   146,   119,   120,   147,    62,   148,   151,    95,    59,
      60,    21,    61,     6,     7,   113,   114,    22,   131,    63,
      64,   188,   189,   190,    26,    48,   160,   161,    47,   195,
      29,    65,    66,   149,   150,    28,   199,    99,    68,   116,
     117,    48,    33,    52,    47,    65,    66,   104,   119,   120,
      53,    67,    68,   106,    54,    34,   -78,   -78,    35,    36,
      37,   122,   -79,   -79,    57,    58,    38,    39,    82,    22,
      77,    81,    84,    85,    86,   178,    88,    92,   -14,   125,
     179,   180,    91,   107,   123,   138,   126,   127,   186,   187,
     132,   144,   134,   135,   139,   136,   153,   -66,   155,   154,
     157,    48,    48,    48,    47,    47,    47,   158,   159,    48,
     162,   163,    47,   168,   173,   167,    48,   171,   172,    47,
     174,   177,   181,   182,   183,   184,   185,   191,   196,   156,
      24,   198,   194,   192,   193,   197,   133,   130,   200,    93,
      32,   169,    83,   170,   143,     0,   140,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,     0,   105
};

static const yytype_int16 yycheck[] =
{
      22,    34,    35,    22,    37,   107,    17,    61,    61,     3,
      17,     0,    13,     3,    22,    15,     8,    50,     3,    17,
      42,   123,    13,    42,    16,    25,    59,    40,    20,    21,
       3,    38,     4,     5,     6,     7,    37,    31,    32,    61,
      38,    31,    32,    38,    77,    40,    23,    24,    81,    43,
      44,     3,    85,    43,    44,    49,    50,    29,    41,    49,
      50,   115,    45,    46,   118,     3,   119,   120,    60,    37,
      38,     3,    40,    14,    15,    47,    48,    30,    89,    31,
      32,   183,   184,   185,     3,   107,   140,   141,   107,   191,
      38,    43,    44,    31,    32,    31,   198,    49,    50,    43,
      44,   123,     3,    13,   123,    43,    44,    61,    45,    46,
      41,    49,    50,    67,     3,    16,    45,    46,    19,    20,
      21,    75,    45,    46,    36,    13,    27,    28,    25,    30,
      38,    38,    13,    37,    13,   168,    35,    39,    36,    13,
     173,   174,    36,    36,    36,    99,    13,    13,   181,   182,
      35,   105,    13,    13,    41,    39,    39,    35,    13,    39,
      13,   183,   184,   185,   183,   184,   185,    35,    41,   191,
      41,    41,   191,    29,    36,    40,   198,    41,    41,   198,
      18,    17,    36,    18,    36,    36,    36,    36,    17,   132,
      16,    36,    39,    41,    40,    39,    91,    88,    41,    57,
      21,   157,    42,   158,   104,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    52,     3,     0,    13,    14,    15,    53,    56,
      61,    62,    23,    24,    56,    63,    64,    65,    54,    40,
       3,     3,    30,    68,    63,    53,     3,    57,    31,    38,
      56,    66,    66,     3,    16,    19,    20,    21,    27,    28,
      68,    69,    70,    71,    73,    74,    75,    76,    78,    68,
      37,    58,    13,    41,     3,    59,    67,    36,    13,    37,
      38,    40,     3,    31,    32,    43,    44,    49,    50,    76,
      78,    82,    83,    84,    86,    87,    82,    38,    31,    32,
      82,    38,    25,    69,    13,    37,    13,    82,    35,    55,
      60,    36,    39,    62,    82,    56,    79,    80,    82,    49,
      77,    78,    83,    84,    86,    87,    86,    36,     4,     5,
       6,     7,    29,    47,    48,    88,    43,    44,    89,    45,
      46,    85,    86,    36,    82,    13,    13,    13,    82,    82,
      57,    53,    35,    61,    13,    13,    39,    81,    86,    41,
      88,    89,    41,    85,    86,    70,    83,    83,    84,    31,
      32,    84,    70,    39,    39,    13,    59,    13,    35,    41,
      83,    83,    41,    41,    17,    38,    72,    40,    29,    67,
      80,    41,    41,    36,    18,    17,    38,    17,    82,    82,
      82,    36,    18,    36,    36,    36,    82,    82,    70,    70,
      70,    36,    41,    40,    39,    70,    17,    39,    36,    70,
      41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    54,    55,    53,    53,    56,    57,    58,
      57,    57,    60,    59,    59,    61,    61,    62,    62,    63,
      63,    64,    65,    65,    66,    66,    67,    67,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    72,    72,    73,
      74,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    79,    79,    80,    81,    80,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     0,     6,     1,     0,     3,     0,
       4,     1,     0,     4,     1,     1,     4,     1,     1,     2,
       1,     3,     6,     4,     3,     1,     3,     5,     3,     1,
       2,     1,     4,     4,     2,     1,     1,     1,     1,     3,
       3,     3,     2,     4,     5,     7,     8,     6,     7,     9,
      13,     1,     4,     1,     4,     3,     2,     3,     3,     3,
       4,     4,     4,     1,     1,     1,     0,     4,     1,     3,
       1,     3,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 71 "example.y" /* yacc.c:1646  */
    {current_type=strdup((yyvsp[0].name));}
#line 1454 "example.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "example.y" /* yacc.c:1646  */
    {
		}
#line 1461 "example.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "example.y" /* yacc.c:1646  */
    {insert(current_type,strdup((yyvsp[-2].name))); look_and_set_value((yyvsp[-2].name)); }
#line 1467 "example.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 78 "example.y" /* yacc.c:1646  */
    {insert(current_type,(yyvsp[0].name));printf("\n\t");}
#line 1473 "example.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 79 "example.y" /* yacc.c:1646  */
    {insert(current_type,(yyvsp[0].name));}
#line 1479 "example.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "example.y" /* yacc.c:1646  */
    {count++;}
#line 1485 "example.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "example.y" /* yacc.c:1646  */
    {count++;}
#line 1491 "example.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "example.y" /* yacc.c:1646  */
    {(yyval.name)=(yyvsp[0].name);}
#line 1497 "example.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "example.y" /* yacc.c:1646  */
    {}
#line 1503 "example.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "example.y" /* yacc.c:1646  */
    {(yyval.name)=(yyvsp[0].name);}
#line 1509 "example.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "example.y" /* yacc.c:1646  */
    {(yyval.name)=(yyvsp[0].name);}
#line 1515 "example.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 92 "example.y" /* yacc.c:1646  */
    {if(is_return==0)yyerror("No return!"); is_return=0;}
#line 1521 "example.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "example.y" /* yacc.c:1646  */
    {
		insert2((yyvsp[-1].name),(yyvsp[-4].name));}
#line 1528 "example.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 96 "example.y" /* yacc.c:1646  */
    {
		insert2("null", (yyvsp[-2].name));}
#line 1535 "example.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 111 "example.y" /* yacc.c:1646  */
    {look_and_set_value((yyvsp[-3].name));}
#line 1541 "example.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 118 "example.y" /* yacc.c:1646  */
    {is_return++; if(strcmp(main_stack[top].type,"int")){yyerror("Wrong return type");}}
#line 1547 "example.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 119 "example.y" /* yacc.c:1646  */
    {is_return++; if(strcmp(main_stack[top].type,"float")){yyerror("Wrong return type");}}
#line 1553 "example.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 120 "example.y" /* yacc.c:1646  */
    {is_return++;}
#line 1559 "example.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 148 "example.y" /* yacc.c:1646  */
    {look((yyvsp[0].name)); has_value((yyvsp[0].name));}
#line 1565 "example.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 153 "example.y" /* yacc.c:1646  */
    {printf(" <-- WARNING: procedure used as an array index");}
#line 1571 "example.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 154 "example.y" /* yacc.c:1646  */
    {printf(" <-- WARNING: '!' operator used as an array index");}
#line 1577 "example.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 155 "example.y" /* yacc.c:1646  */
    {printf(" <-- WARNING: sign operator used as an array index");}
#line 1583 "example.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 156 "example.y" /* yacc.c:1646  */
    {printf(" <-- WARNING: mul/div operation used as an array index");}
#line 1589 "example.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 157 "example.y" /* yacc.c:1646  */
    {printf(" <-- WARNING: add/sub operation used as an array index");}
#line 1595 "example.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 158 "example.y" /* yacc.c:1646  */
    {printf(" <-- WARNING: relational operation used as an array index");}
#line 1601 "example.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 160 "example.y" /* yacc.c:1646  */
    {look2((yyvsp[-3].name)); check_func_param_num((yyvsp[-3].name));}
#line 1607 "example.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 165 "example.y" /* yacc.c:1646  */
    {count_check++;}
#line 1613 "example.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "example.y" /* yacc.c:1646  */
    {count_check++;}
#line 1619 "example.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 180 "example.y" /* yacc.c:1646  */
    {if((yyvsp[0].Ival)==0) {printf(" <--DIVIDE BY ZERO!");}}
#line 1625 "example.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "example.y" /* yacc.c:1646  */
    {if((yyvsp[0].value)==0.0||(yyvsp[0].value)==0) {printf(" <--DIVIDE BY ZERO!");}}
#line 1631 "example.tab.c" /* yacc.c:1646  */
    break;


#line 1635 "example.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 196 "example.y" /* yacc.c:1906  */

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
