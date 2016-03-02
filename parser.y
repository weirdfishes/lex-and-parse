%{

#include <stdio.h>
#include <stdlib.h>
int yylex();
extern FILE *yyin;
void yyerror(const char *s);

%}

%token IF 
%token ELSE 
%token FOR 
%token WHILE 
%token LPAREN 
%token RPAREN  
%token LBRACE 
%token RBRACE 
%token INT 
%token CHAR 
%token STRING 
%token BOOL 
%token ADD 
%token BOOLCONST
%token INTCONST 
%token STRINGCONST
%token CHARCONST
%token SUB 
%token MULT 
%token DIV 
%token MOD 
%token LESSTHAN 
%token GREATERTHAN 
%token LEQ 
%token GEQ 
%token EQUALS 
%token NOTEQUALS 
%token EQUAL 
%token SEMICOLON
%token COMMA 
%token RETURN 
%token PRINTF 
%token VOID 
%token ID 
%token NEWLINE 

%left ADD SUB MULT DIV MOD 
%left LESSTHAN GREATERTHAN LEQ GEQ EQUALS NOTEQUALS
%right EQUAL ELSE 
%nonassoc NOELSE

%start Program

%%

Program : Declare { printf(" reduce[1]"); }
		;

Declare : Declare Decl { printf(" reduce[2]"); }
    	 | Decl { printf(" reduce[3]"); }
    	 ;


Decl : VariableDecl { printf(" reduce[4]"); }
	 | FunctionDecl { printf(" reduce[5]"); }
	 ;


VariableDecl : Variable SEMICOLON { printf(" reduce[6]"); }
			 ;

Variable : Type Identifier { printf(" reduce[7]"); }
         ;


Type : INT { printf(" reduce[8]"); }
     | BOOL { printf(" reduce[9]"); }
     | STRING { printf(" reduce[10]"); }
     | CHAR { printf(" reduce[11]"); }
     ;


FunctionDecl : Type Identifier LPAREN OptionalFormals RPAREN StmtBlock { printf(" reduce[12]"); }
			 | VOID Identifier LPAREN OptionalFormals RPAREN StmtBlock { printf(" reduce[13]"); }
			 ;


OptionalFormals : Formals { printf(" reduce[14]"); }
		   | { printf(" reduce[15]"); }
		   ;


Formals : Variable { printf(" reduce[16]"); }
		| Formals COMMA Variable { printf(" reduce[17]"); }
		;



StmtBlock : LBRACE VarDeclPrime StmtList RBRACE { printf(" reduce[18]"); }
		  | LBRACE StmtList RBRACE { printf(" reduce[19]"); }
		  | LBRACE VarDeclPrime RBRACE { printf(" reduce[20]"); }
		  | LBRACE RBRACE { printf(" reduce[21]"); }
		  ;



VarDeclPrime : VarDeclPrime VariableDecl { printf(" reduce[22]"); }
		   | VariableDecl { printf(" reduce[23]"); }
		   ;


StmtList : StmtList Stmt { printf(" reduce[24]"); }
		 | Stmt { printf(" reduce[25]"); }
		 ;


Stmt : PrintStmt { printf(" reduce[26]"); }
	 | SEMICOLON { printf(" reduce[27]"); }
	 | Expr SEMICOLON { printf(" reduce[28]"); }
	 | IfStmt { printf(" reduce[29]"); }
	 | WhileStmt { printf(" reduce[30]"); }
	 | ForStmt { printf(" reduce[31]"); }
	 | ReturnStmt { printf(" reduce[32]"); }
	 | StmtBlock { printf(" reduce[33]"); }
	 ;


IfStmt : IF LPAREN Expr RPAREN Stmt ELSE Stmt { printf(" reduce[34]"); }
	   | IF LPAREN Expr RPAREN Stmt %prec NOELSE { printf(" reduce[35]"); }
	   ;



WhileStmt : WHILE LPAREN Expr RPAREN Stmt { printf(" reduce[36]"); }
		  ;


ForStmt : FOR LPAREN SEMICOLON Expr SEMICOLON RPAREN Stmt { printf(" reduce[37]"); }
		| FOR LPAREN Expr SEMICOLON Expr SEMICOLON RPAREN Stmt { printf(" reduce[38]"); }
		| FOR LPAREN SEMICOLON Expr SEMICOLON Expr RPAREN Stmt { printf(" reduce[39]"); }
		| FOR LPAREN Expr SEMICOLON Expr SEMICOLON Expr RPAREN Stmt { printf(" reduce[40]"); }
		| FOR LPAREN Expr SEMICOLON SEMICOLON RPAREN Stmt { printf(" reduce[41]"); }
		| FOR LPAREN SEMICOLON SEMICOLON Expr RPAREN Stmt { printf(" reduce[42]"); }
		| FOR LPAREN SEMICOLON SEMICOLON RPAREN Stmt { printf(" reduce[43]"); }
		| FOR LPAREN Expr SEMICOLON SEMICOLON Expr RPAREN Stmt { printf(" reduce[44]"); } 
		;



ReturnStmt : RETURN SEMICOLON { printf(" reduce[45]"); }
		   | RETURN Expr SEMICOLON { printf(" reduce[46]"); }
		   ;



PrintStmt : PRINTF LPAREN STRINGCONST COMMA ExprList RPAREN SEMICOLON { printf(" reduce[47]"); }
		  | PRINTF LPAREN Constant RPAREN SEMICOLON { printf(" reduce[48]"); }
		  | PRINTF LPAREN ID RPAREN SEMICOLON { printf(" reduce[49]"); }
		  ;





ExprList : ExprList COMMA Expr { printf(" reduce[50]"); }
	 | Expr { printf(" reduce[51]"); }
	 ;




Expr : Identifier EQUAL Expr { printf(" reduce[52]"); }
	 | Constant { printf(" reduce[53]"); }
	 | Identifier { printf(" reduce[54]"); }
	 | Call { printf(" reduce[55]"); }
	 | LPAREN Expr RPAREN { printf(" reduce[56] "); }
	 | Expr ADD Expr { printf(" reduce[57]"); }
	 | Expr SUB Expr { printf(" reduce[58]"); }
	 | Expr MULT Expr { printf(" reduce[59]"); }
	 | Expr DIV Expr { printf(" reduce[60]"); }
	 | Expr MOD Expr { printf(" reduce[61]"); }
	 | SUB Expr { printf(" reduce[62]"); }
	 | Expr LESSTHAN Expr { printf(" reduce[63]"); }
	 | Expr LEQ Expr { printf(" reduce[64]"); }
	 | Expr GREATERTHAN Expr { printf(" reduce[65]"); }
	 | Expr GEQ Expr { printf(" reduce[66]"); }
	 | Expr EQUALS Expr { printf(" reduce[67]"); }
	 | Expr NOTEQUALS Expr { printf(" reduce[68]"); }
	 ;



Call : Identifier LPAREN OptionalExprList RPAREN { printf(" reduce[69]"); }
	 ;


Identifier : ID { printf(" reduce[70]"); }
		   ;


OptionalExprList : Actuals { printf(" reduce[71]"); }
		   | { printf(" reduce[72]"); }
		   ;


Actuals : Expr { printf(" reduce[73]"); }
		| Actuals COMMA Expr { printf(" reduce[74]"); }
		;


Constant : STRINGCONST { printf(" reduce[75]"); }
		 | INTCONST { printf(" reduce[76]"); }
		 | BOOLCONST { printf(" reduce[77]"); }
		 | CHARCONST { printf(" reduce[78]"); }
		 ;  

%%

int main(int argc, char *argv[])
{

  //opens file using command line args
  yyin = fopen(argv[1], "r");
	//only one file at a time...
  
  if (yyparse() == 0) {
		printf("\n[accept]\n\n\n");
    printf("success!\n");
	}
}

void yyerror(char const *s)
{
	printf(" \n[reject]\n\n\n");
  printf("failure :(\n");
}
