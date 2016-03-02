/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     LPAREN = 262,
     RPAREN = 263,
     LBRACE = 264,
     RBRACE = 265,
     INT = 266,
     CHAR = 267,
     STRING = 268,
     BOOL = 269,
     ADD = 270,
     BOOLCONST = 271,
     INTCONST = 272,
     STRINGCONST = 273,
     CHARCONST = 274,
     SUB = 275,
     MULT = 276,
     DIV = 277,
     MOD = 278,
     LESSTHAN = 279,
     GREATERTHAN = 280,
     LEQ = 281,
     GEQ = 282,
     EQUALS = 283,
     NOTEQUALS = 284,
     EQUAL = 285,
     SEMICOLON = 286,
     COMMA = 287,
     RETURN = 288,
     PRINTF = 289,
     VOID = 290,
     ID = 291,
     NEWLINE = 292,
     NOELSE = 293
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define LPAREN 262
#define RPAREN 263
#define LBRACE 264
#define RBRACE 265
#define INT 266
#define CHAR 267
#define STRING 268
#define BOOL 269
#define ADD 270
#define BOOLCONST 271
#define INTCONST 272
#define STRINGCONST 273
#define CHARCONST 274
#define SUB 275
#define MULT 276
#define DIV 277
#define MOD 278
#define LESSTHAN 279
#define GREATERTHAN 280
#define LEQ 281
#define GEQ 282
#define EQUALS 283
#define NOTEQUALS 284
#define EQUAL 285
#define SEMICOLON 286
#define COMMA 287
#define RETURN 288
#define PRINTF 289
#define VOID 290
#define ID 291
#define NEWLINE 292
#define NOELSE 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

