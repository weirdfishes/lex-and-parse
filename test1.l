%{
#include <stdio.h>
#include <string.h>
#include "parser.h"
#include <stdlib>
#define TOKEN(r) TOKEN( r
%}

DIGIT [0-9]+
ID [a-z][a-z0-9]*
INT "int"
FLOAT [0-9]*"."[0-9]*
IF "if"
LPAREN "("
RPAREN ")"
LBRACE "{"
RBRACE "}"
EQUAL "=="
RETURN TOKEN(
BOOL "true"|"false"|"TRUE"|"FALSE" 
ELSE else
PRINTF "TOKEN( TOKEN"
STRING \".*\"
VOID void
WHILE while

%%
{EQUAL}  {printf("Found EQUAL \n"); TOKEN(EQUAL);}
{LPAREN} {printf("Found LPAREN \n"); TOKEN(LPRAEN);}
{RPAREN} {printf("Found RPRAEN \n"); TOKEN(RPAREN);}
{VOID}   {printf("Found VOID \n"); TOKEN(VOID);}
{RETURN} {printf("Found RETURN \n"); TOKEN(RETURN);}
{INT}    {printf("Found INT \n"); TOKEN(INT);}
{WHILE}  {printf("Found WHILE \n");TOKEN(WHILE);}
{IF}     {printf("Found IF \n"); TOKEN(IF);}
{DIGIT}  {yylval.ival = atoi(yytext); printf("Found DIGIT \n"); TOKEN(INT);};
{PRINTF} {printf("Found PRINTF \n"); TOKEN(PRINTF);}
{ELSE}   {printf("Found ELSE \n"); TOKEN(ELSE);}
{BOOL}   {printf("Found BOOL \n"); TOKEN(BOOL);}
{ID}     {printf("Found INT \n"); yylval.idval = strdup(yytext); TOKEN(ID);}
{STRING} {printf("Found STRING \n");yylval.sval = strdup(yytext); TOKEN(STRING);}
{FLOAT}  {printf("Found FLOAT \n"); yylval.fval = atof(yytext); TOKEN(FLOAT);}
{LBRACE} {printf("Found LBRACE \n"); TOKEN(LBRACE);}
{RBRACE} {printf("Found RBRACE \n"); TOKEN(RBRACE);}
"[sS]tring" {printf("Found  STRINGC \n"); TOKEN(STRINGC);}
"bool"   { printf("Found BOOL \n"); TOKEN(BOOLC);}
"float"  {printf("Found FLOAT \n");TOKEN( FLOATC);}
"for"    {printf("Found FOR \n");TOKEN( FOR);}
"+"	 {printf("Found ADD \n");TOKEN( ADD);}
"-"	 {printf("Found SUB \n");TOKEN( SUB);}
"*"	 {printf("Found MUL \n");TOKEN( MUL);}
"/"      {printf("Found DIV \n");TOKEN( DIV);}
"%"	 {printf("Found MOD \n");TOKEN( MOD);}
"<"	 {printf("Found LTHAN \n");TOKEN( LTHAN);}
"<="	 {printf("Found LEQUAL \n");TOKEN( LEQUAL);}
">"	 {printf("Found GTHAN \n");TOKEN( GTHAN);}
">="	 {printf("Found GEQUAL \n");TOKEN( GEQUAL);}
"!="	 {printf("Found NEQUAL \n");TOKEN( NEQUAL);}
"="	 {printf("Found EQUALS\n");TOKEN( ASSIGN) ;}
";"	 {printf("Found SEMICOLON \n");TOKEN(SEMICOLON);}
","	 {printf("Found COMMA \n");TOKEN(COMMA);}
[ \t]+   {}
. {printf("Invalid character: %c\n",*yytext);}

%%

int main(int argc, char **argv) {
	if(num_args !=2){printf (" usage : ./ parser1 filename \n"); exit (0);}
	FILE* file = fopen(args[1],"r");
	if(file ==NULL) {printf("couldnt open %s\n",args[1]);exit (0);}
	yyin =file;
	yylex();
	fclose(file);
	return 0;
}


