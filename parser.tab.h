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
     ADD = 258,
     SUB = 259,
     MUL = 260,
     DIV = 261,
     MOD = 262,
     LTHAN = 263,
     LEQUAL = 264,
     GTHAN = 265,
     GEQUAL = 266,
     NEQUAL = 267,
     ASSIGN = 268,
     SEMICOLON = 269,
     COMMA = 270,
     DIGIT = 271,
     STRINGC = 272,
     BOOLC = 273,
     CHARC = 274,
     IF = 275,
     LBRACE = 276,
     RBRACE = 277,
     LPARAN = 278,
     RPARAN = 279,
     EQUAL = 280,
     RETURN = 281,
     INT = 282,
     WHILE = 283,
     VOID = 284,
     PRINTF = 285,
     ELSE = 286,
     FLOAT = 287,
     ID = 288,
     FOR = 289,
     FLOATC = 290,
     STRING = 291,
     BOOL = 292,
     CHAR = 293
   };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define MOD 262
#define LTHAN 263
#define LEQUAL 264
#define GTHAN 265
#define GEQUAL 266
#define NEQUAL 267
#define ASSIGN 268
#define SEMICOLON 269
#define COMMA 270
#define DIGIT 271
#define STRINGC 272
#define BOOLC 273
#define CHARC 274
#define IF 275
#define LBRACE 276
#define RBRACE 277
#define LPARAN 278
#define RPARAN 279
#define EQUAL 280
#define RETURN 281
#define INT 282
#define WHILE 283
#define VOID 284
#define PRINTF 285
#define ELSE 286
#define FLOAT 287
#define ID 288
#define FOR 289
#define FLOATC 290
#define STRING 291
#define BOOL 292
#define CHAR 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

