/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 49 "example.y" /* yacc.c:1909  */

	double value;
	struct sym_tab *symp;
	char *name;
	int  Ival;

#line 112 "example.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EXAMPLE_TAB_H_INCLUDED  */
