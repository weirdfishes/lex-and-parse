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

"bool" { printf("\n%s", yytext); return BOOL; }

"char" { printf("\n%s", yytext); return CHAR; }

"else" { printf("\n%s", yytext); return ELSE; }

"for" { printf("\n%s", yytext); return FOR; }

"int" { printf("\n%s", yytext); return INT; }

"printf" { printf("\n%s", yytext); return PRINTF; }

"return" { printf("\n%s", yytext); return RETURN; }

"string" { printf("\n%s", yytext); return STRING; }

"void" { printf("\n%s", yytext); return VOID; }

"while" { printf("\n%s", yytext); return WHILE; }

"true" { printf("\n%s", yytext); return BOOLCONSTANT; }

"false" { printf("\n%s", yytext); return BOOLCONSTANT; }

([^'\n]|\\)'([^'\n])' { printf("\n%s", yytext); return CHARCONSTANT; }

[a-z][a-zA-z"_"0-9]* { printf("\n%s", yytext); return ID; }

{DIGIT}|{HEX} { printf("\n%s", yytext); return INTCONSTANT; }

\"(\\.|[^\\"])*\" { printf("\n%s", yytext); return STRINGCONSTANT; }

"//".* { }

"/*"([a-z]|[A-Z]|[0-9]|[ ]|[ \n\t])+"*/" { }

"+" { printf("\n%s", yytext); return ADD; }

"-" { printf("\n%s", yytext); return SUB; }

"*" { printf("\n%s", yytext); return MULT; }

"/" { printf("\n%s", yytext); return DIV; }

"%" { printf("\n%s", yytext); return MOD; } 

"<" { printf("\n%s", yytext); return LESSTH; }

">" { printf("\n%s", yytext); return GREATTH; }

"<=" { printf("\n%s", yytext); return LESSTHEQ; }

">=" { printf("\n%s", yytext); return GREATTHEQ; }

"==" { printf("\n%s", yytext); return EQUALS; }

"!=" { printf("\n%s", yytext); return NOTEQUALS; }

"=" { printf("\n%s", yytext); return EQUAL; }

";" { printf("\n%s", yytext); return SEMICOLON; }

"," { printf("\n%s", yytext); return COMMA; }

"(" { printf("\n%s", yytext); return LPAR; }

")" { printf("\n%s", yytext); return RPAR; }

"{" { printf("\n%s", yytext); return LBRACE; }

"}" { printf("\n%s", yytext); return RBRACE; }

%%
