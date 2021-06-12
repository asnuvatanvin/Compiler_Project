
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     INTT = 259,
     FL = 260,
     FLOAT = 261,
     ID = 262,
     STRING = 263,
     STT = 264,
     IF = 265,
     ELIF = 266,
     ELSE = 267,
     FOR = 268,
     DW = 269,
     SW = 270,
     CA = 271,
     WHILE = 272,
     COL = 273,
     INC = 274,
     DEC = 275,
     MIN = 276,
     MAX = 277,
     GCD = 278,
     PFI = 279,
     PRIME = 280,
     DF = 281,
     POW = 282,
     PFF = 283,
     SINE = 284,
     COS = 285,
     TAN = 286,
     LN = 287,
     CMT = 288,
     HEAD = 289,
     DEF = 290,
     ABS = 291,
     FLOOR = 292,
     CEIL = 293,
     RET = 294,
     END = 295,
     PFS = 296,
     PFSN = 297,
     LEN = 298,
     CMP = 299,
     CAT = 300,
     CPY = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 27 "1707005.y"

    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;



/* Line 1676 of yacc.c  */
#line 110 "1707005.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


