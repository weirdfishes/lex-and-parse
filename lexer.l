%{
#include <stdio.h>
#include "parser.tab.h"
%}

DIGIT [0-9]*
HEX 0[xX]({DIGIT}|[a-fA-F]){1,8}

%%

[\n]+ { }

[ \t\n]+ { }

"if" { printf("\n%s", yytext); return IF; }
"else" { printf("\n%s", yytext); return ELSE; }
"for" { printf("\n%s", yytext); return FOR; }
"while" { printf("\n%s", yytext); return WHILE; }
"bool" { printf("\n%s", yytext); return BOOL; }
"char" { printf("\n%s", yytext); return CHAR; }
"int" { printf("\n%s", yytext); return INT; }
"string" { printf("\n%s", yytext); return STRING; }
"printf" { printf("\n%s", yytext); return PRINTF; }
"return" { printf("\n%s", yytext); return RETURN; }
"void" { printf("\n%s", yytext); return VOID; }
"true" { printf("\n%s", yytext); return BOOLCONST; }
"false" { printf("\n%s", yytext); return BOOLCONST; }
([^'\n]|\\)'([^'\n])' { printf("\n%s", yytext); return CHARCONST; }
[a-z][a-zA-z"_"0-9]* { printf("\n%s", yytext); return ID; }
{DIGIT}|{HEX} { printf("\n%s", yytext); return INTCONST; }
\"(\\.|[^\\"])*\" { printf("\n%s", yytext); return STRINGCONST; }
"//".* { }
"/*"([a-z]|[A-Z]|[0-9]|[ ]|[ \n\t])+"*/" { }
"(" { printf("\n%s", yytext); return LPAREN; }
")" { printf("\n%s", yytext); return RPAREN; }
"{" { printf("\n%s", yytext); return LBRACE; }
"}" { printf("\n%s", yytext); return RBRACE; }
"<" { printf("\n%s", yytext); return LESSTHAN; }
">" { printf("\n%s", yytext); return GREATERTHAN; }
"<=" { printf("\n%s", yytext); return LEQ; }
">=" { printf("\n%s", yytext); return GEQ; }
"==" { printf("\n%s", yytext); return EQUALS; }
"!=" { printf("\n%s", yytext); return NOTEQUALS; }
"=" { printf("\n%s", yytext); return EQUAL; }
";" { printf("\n%s", yytext); return SEMICOLON; }
"," { printf("\n%s", yytext); return COMMA; }
"+" { printf("\n%s", yytext); return ADD; }
"-" { printf("\n%s", yytext); return SUB; }
"*" { printf("\n%s", yytext); return MULT; }
"/" { printf("\n%s", yytext); return DIV; }
"%" { printf("\n%s", yytext); return MOD; } 

%%
