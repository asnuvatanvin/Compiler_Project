%{

#include<stdio.h>
#include<string.h>
#include<math.h>
#include "1707005.tab.h"
#define yywrap() 1

%}

%%
[+-]?[0-9]+                      {yylval.variable.ival = atoi(yytext);
                                  return INT;}

[+-]?[0-9]*[.][0-9]+              {yylval.variable.fval = atof(yytext);
                                   return FLOAT;}

["][a-zA-Z0-9:_]*["]                {yytext++;int l=strlen(yytext);
                                    yylval.variable.st=yytext;
                                    yylval.variable.st[l-1]='\0';
                                    return STRING;}
"="                               {return *yytext;}
"+"                               {return *yytext;}
"-"                               {return *yytext;}
"*"                               {return *yytext;}
"/"                               {return *yytext;}
"%"                               {return *yytext;}
"("                               {return *yytext;}
")"                               {return *yytext;}
"{"                               {return *yytext;}
"}"                               {return *yytext;}
","                               {return *yytext;}
":"                               {return COL;}
"!"                               {return *yytext;}
"++"                              {return INC;}
"--"                              {return DEC;}
">"                               {return *yytext;}
"<"                               {return *yytext;}
">="                              {return *yytext;}
"<="                              {return *yytext;}
"=="                              {return *yytext;}
"!="                              {return *yytext;}
[#][a-z<>.h]+                     {return HEAD;}
[/]{2}.*                          {return CMT;}
[ ;\t\n]                           {}
"return"                          {return RET;}
"void"                            {return VOID;}
"floor"                           {return FLOOR;}
"ceil"                            {return CEIL;}
"abs"                             {return ABS;}
"int"                             {return INTT;}
"float"                           {return FL;}
"string"                          {return STT;}
"sin"                             {return SINE;}
"cos"                             {return COS;}
"tan"                             {return TAN;}
"pow"                             {return POW;}
"ln"                              {return LN;}
"prime"                           {return PRIME;}
"pfi"                             {return PFI;}
"pff"                             {return PFF;}
"pfs"                             {return PFS;}
"pfsn"                            {return PFSN;}
"len"                             {return LEN;}
"cmp"                             {return CMP;}
"cat"                             {return CAT;}
"cpy"                             {return CPY;}
"gcd"                             {return GCD;}
"min"                             {return MIN;}
"max"                             {return MAX;}
"if"                              {return IF;}
"elif"                            {return ELIF;}
"else"                            {return ELSE;}
"for"                             {return FOR;}
"while"                           {return WHILE;}
"switch"                          {return SW;}
"case"                            {return CA;}
"default"                         {return DF;}
[a-zA-Z][a-zA-Z0-9]*              {yylval.variable.str = yytext;
                                    return ID;}
.                                 {printf("Unknown character.\n");}
%%
