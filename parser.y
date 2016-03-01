%{

#include <stdio.h>
int yylex();
void yyerror(const char *s);

%}


%token NEWLINE 
%token INT 
%token CHAR 
%token STRING 
%token ADD 
%token SUB 
%token MULT 
%token DIV 
%token MOD 
%token LESSTH 
%token GREATTH 
%token LESSTHEQ 
%token GREATTHEQ 
%token EQUALS 
%token NOTEQUALS 
%token EQUAL 
%token SEMICOLON
%token COMMA 
%token BOOL 
%token IF 
%token ELSE 
%token RETURN 
%token FOR 
%token VOID 
%token WHILE 
%token PRINTF 
%token LPAR 
%token RPAR  
%token LBRACE 
%token RBRACE 
%token ID 
%token BOOLCONSTANT
%token INTCONSTANT 
%token STRINGCONSTANT
%token CHARCONSTANT

%left ADD SUB MULT DIV MOD 
%left LESSTH GREATTH LESSTHEQ GREATTHEQ EQUALS NOTEQUALS
%right EQUAL ELSE 
%nonassoc NOELSE

%start Program

%%

Program : DeclPrime { printf(" reduce[1]"); }
		;

DeclPrime : DeclPrime Decl { printf(" reduce[2]"); }
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


FunctionDecl : Type Identifier LPAR OptionalFormals RPAR StmtBlock { printf(" reduce[12]"); }
			 | VOID Identifier LPAR OptionalFormals RPAR StmtBlock { printf(" reduce[13]"); }
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


IfStmt : IF LPAR Expr RPAR Stmt ELSE Stmt { printf(" reduce[34]"); }
	   | IF LPAR Expr RPAR Stmt %prec NOELSE { printf(" reduce[35]"); }
	   ;



WhileStmt : WHILE LPAR Expr RPAR Stmt { printf(" reduce[36]"); }
		  ;


ForStmt : FOR LPAR SEMICOLON Expr SEMICOLON RPAR Stmt { printf(" reduce[37]"); }
		| FOR LPAR Expr SEMICOLON Expr SEMICOLON RPAR Stmt { printf(" reduce[38]"); }
		| FOR LPAR SEMICOLON Expr SEMICOLON Expr RPAR Stmt { printf(" reduce[39]"); }
		| FOR LPAR Expr SEMICOLON Expr SEMICOLON Expr RPAR Stmt { printf(" reduce[40]"); }
		| FOR LPAR Expr SEMICOLON SEMICOLON RPAR Stmt { printf(" reduce[41]"); }
		| FOR LPAR SEMICOLON SEMICOLON Expr RPAR Stmt { printf(" reduce[42]"); }
		| FOR LPAR SEMICOLON SEMICOLON RPAR Stmt { printf(" reduce[43]"); }
		| FOR LPAR Expr SEMICOLON SEMICOLON Expr RPAR Stmt { printf(" reduce[44]"); } 
		;



ReturnStmt : RETURN SEMICOLON { printf(" reduce[45]"); }
		   | RETURN Expr SEMICOLON { printf(" reduce[46]"); }
		   ;



PrintStmt : PRINTF LPAR STRINGCONSTANT COMMA ExprList RPAR SEMICOLON { printf(" reduce[47]"); }
		  | PRINTF LPAR Constant RPAR SEMICOLON { printf(" reduce[48]"); }
		  | PRINTF LPAR ID RPAR SEMICOLON { printf(" reduce[49]"); }
		  ;





ExprList : ExprList COMMA Expr { printf(" reduce[50]"); }
	 | Expr { printf(" reduce[51]"); }
	 ;




Expr : Identifier EQUAL Expr { printf(" reduce[52]"); }
	 | Constant { printf(" reduce[53]"); }
	 | Identifier { printf(" reduce[54]"); }
	 | Call { printf(" reduce[55]"); }
	 | LPAR Expr RPAR { printf(" reduce[56] "); }
	 | Expr ADD Expr { printf(" reduce[57]"); }
	 | Expr SUB Expr { printf(" reduce[58]"); }
	 | Expr MULT Expr { printf(" reduce[59]"); }
	 | Expr DIV Expr { printf(" reduce[60]"); }
	 | Expr MOD Expr { printf(" reduce[61]"); }
	 | SUB Expr { printf(" reduce[62]"); }
	 | Expr LESSTH Expr { printf(" reduce[63]"); }
	 | Expr LESSTHEQ Expr { printf(" reduce[64]"); }
	 | Expr GREATTH Expr { printf(" reduce[65]"); }
	 | Expr GREATTHEQ Expr { printf(" reduce[66]"); }
	 | Expr EQUALS Expr { printf(" reduce[67]"); }
	 | Expr NOTEQUALS Expr { printf(" reduce[68]"); }
	 ;



Call : Identifier LPAR OptionalExprList RPAR { printf(" reduce[69]"); }
	 ;


Identifier : ID { printf(" reduce[70]"); }
		   ;


OptionalExprList : Actuals { printf(" reduce[71]"); }
		   | { printf(" reduce[72]"); }
		   ;


Actuals : Expr { printf(" reduce[73]"); }
		| Actuals COMMA Expr { printf(" reduce[74]"); }
		;


Constant : STRINGCONSTANT { printf(" reduce[75]"); }
		 | INTCONSTANT { printf(" reduce[76]"); }
		 | BOOLCONSTANT { printf(" reduce[77]"); }
		 | CHARCONSTANT { printf(" reduce[78]"); }
		 ;  

%% 

int main(int argc, char **argv)
{
	if (yyparse() == 0) {
		printf("\n[accept]\n");
	}
}

void yyerror(char const *s)
{
	//fprintf(stderr, "\n%s", s);
	printf(" \n[reject]\n");
}




