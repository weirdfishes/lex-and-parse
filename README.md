# Lexer & Parser

## Building the project

```$ git clone https://github.com/weirdfishes/lex-and-parse.git```

```$ bison -vd parser.y```

```$ flex lexer.l```

```$ gcc parser.tab.c lex.yy.c -ll -o myparser.out```


## Running the project

```$ ./myparser.out file1.b```

file1.b must be present in the same directory as the executable. 
