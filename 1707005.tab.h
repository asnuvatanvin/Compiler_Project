
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
     VOID = 265,
     AN = 266,
     IF = 267,
     ELIF = 268,
     ELSE = 269,
     FOR = 270,
     SW = 271,
     CA = 272,
     WHILE = 273,
     COL = 274,
     INC = 275,
     DEC = 276,
     MIN = 277,
     MAX = 278,
     GCD = 279,
     PFI = 280,
     DO = 281,
     PRIME = 282,
     DF = 283,
     POW = 284,
     PFF = 285,
     PFA = 286,
     SINE = 287,
     COS = 288,
     TAN = 289,
     LN = 290,
     CMT = 291,
     HEAD = 292,
     ABS = 293,
     FLOOR = 294,
     CEIL = 295,
     RET = 296,
     PFS = 297,
     PFSN = 298,
     LEN = 299,
     CMP = 300,
     CAT = 301,
     CPY = 302,
     END = 303,
     INPI = 304,
     INPF = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 36 "1707005.y"

    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;



/* Line 1676 of yacc.c  */
#line 114 "1707005.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


