%{
#include <stdio>
#include <stdlib>
#include <string>
%}

%token  ADD SUB MUL DIV MOD LTHAN LEQUAL GTHAN 
%token  GEQUAL NEQUAL ASSIGN SEMICOLON COMMA DIGIT
%token  STRINGC BOOLC CHARC IF LBRACE RBRACE LPARAN RPARAN
%token  EQUAL RETURN INT WHILE VOID PRINTF ELSE 
%token  FLOAT ID FOR FLOATC 
%token  STRING
%token  BOOL
%token  CHAR

%right ASSIGN
%left NEQUAL EQUAL LTHAN LEQUAL GTHAN GEQUAL
%left ADD SUB
%left MUL DIV


%start Program

%%
Program: Decl 
       | Program Decl
	;
Decl: VariableDecl 
    | FunctionDecl
	;
VariableDecl: Variable SEMICOLON
	;         
Variable: Type ID
	;
Type: INT 
    | BOOLC 
    | STRINGC 
    | CHARC
    | FLOATC
	;
FunctionDecl: Type ID LPARAN Formals RPARAN StmtBlock 
            | VOID ID LPARAN Formals RPARAN StmtBlock
	;
Formals: Variable 
       | Formals Variable COMMA
	;
StmtBlock: LBRACE Lone Ltwo RBRACE
	;
Lone: /*empty*/ 
    | Lone VariableDecl 
	;
Ltwo:/*empty*/ 
    | Ltwo Stmt
	;
Stmt: Expr SEMICOLON 
    | IfStmt 
    | WhileStmt 
    | ForStmt 
    | ReturnStmt 
    | PrintStmt 
    | StmtBlock
	;
IfStmt: IF LPARAN Expr RPARAN Stmt ELSE Stmt
	;
WhileStmt: WHILE LPARAN Expr RPARAN Stmt
	;
ForStmt: FOR LPARAN Expr SEMICOLON Expr SEMICOLON Expr RPARAN Stmt
	;
ReturnStmt: RETURN Expr
	;
PrintStmt: PRINTF LPARAN STRING COMMA ExprList RPARAN SEMICOLON 
	   | PRINTF LPARAN Constant RPARAN SEMICOLON | PRINTF LPARAN ID RPARAN
	;
ExprList: Expr 
        | ExprList Expr COMMA
	;
Expr: ID ASSIGN Expr 
    | Constant 
    | ID 
    | Call 
    | Paranexpr 
    | Mathexpr  
    | Compexpr
	;

Mathexpr: Mathexpr MathOp Mathexpr
    | Constant
    | ID
  ;

Paranexpr: LPARAN Expr RPARAN
  ;

Compexpr: Expr Comp Expr
    | ID
    | Constant
  ;

MathOp: ADD
      | SUB
      | DIV
      | MUL
      | MOD
	;
Comp: LTHAN
    | LEQUAL
    | GTHAN
    | GEQUAL
    | EQUAL
    | NEQUAL
	;
Call: ID LPARAN ExprList RPARAN
	;
Constant: DIGIT 
        | BOOL 
        | STRING 
        | CHAR
        | FLOAT
	;
%%	
