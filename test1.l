%{
#include <stdio.h>
#include <string.h>
#include "parser.h"
#include <stdlib>
#define YY_DECL extern "C" int yylex()
void yyerror(char*);
int yyparse(void);
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
RETURN return
BOOL "true"|"false"|"TRUE"|"FALSE" 
ELSE else
PRINTF "return TOKEN"
STRING \".*\"
VOID void
WHILE while

%%
"[sS]tring" {printf("Found A STRINGC token\n");return STRINGC;}
"bool"   { printf("Found A BOOLC token\n");return BOOLC;}
"float"  {printf("Found A FLOATC token\n");return FLOATC;}
"for"    {printf("Found A FOR token\n");return FOR;}
{IF}     {printf("Found A IF token\n");return IF;}
{DIGIT}  {yylval.ival = atoi(yytext); printf("Found A DIGIT token\n"); return INT;};
{LBRACE} {printf("Found A LBRACE token\n"); return LBRACE;}
{RBRACE} {printf("Found A RBRACE token\n"); return RBRACE;}
{LPAREN} {printf("Found A LPAREN token\n"); return LPRAEN;}
{RPAREN} {printf("Found A RPRAEN token\n"); return RPAREN;}
{EQUAL}  {printf("Found A EQUAL token\n"); return EQUAL;}
{RETURN} {printf("Found A RETURN token\n"); return RETURN;}
{FLOAT}  {printf("Found A FLOAT token\n"); yylval.fval = atof(yytext); return FLOAT;}
{INT}    {printf("Found A INT token\n");return INT;}
{WHILE}  {printf("Found A WHILE token\n");return WHILE;}
{VOID}   {printf("Found A VOID token\n");return VOID;}
{PRINTF} {printf("Found A PRINTF token\n");return PRINTF;}
{ELSE}   {printf("Found A ELSE token\n");return ELSE;}
{BOOL}   {printf("Found A BOOL token\n");return BOOL;}
{ID}     {printf("Found A INT token\n"); yylval.idval = strdup(yytext); return ID;}
{STRING} {printf("Found A STRING token\n");yylval.sval = strdup(yytext); return STRING};
"+"	 {printf("Found A ADD token\n");return ADD;}
"-"	 {printf("Found A SUB token\n");return SUB;}
"*"	 {printf("Found A MUL token\n");return MUL;}
"/"      {printf("Found A DIV token\n");return DIV;}
"%"	 {printf("Found A MOD token\n");return MOD;}
"<"	 {printf("Found A LTHAN token\n");return LTHAN;}
"<="	 {printf("Found A LEQUAL token\n");return LEQUAL;}
">"	 {printf("Found A GTHAN token\n");return GTHAN;}
">="	 {printf("Found A GEQUAL token\n");return GEQUAL;}
"!="	 {printf("Found A NEQUAL token\n");return NEQUAL;}
"="	 {printf("Found A ASSIGN token\n");return ASSIGN ;}
";"	 {printf("Found A SEMICOLON token\n");return SEMICOLON;}
","	 {printf("Found A COMMA token\n");return COMMA;}
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


