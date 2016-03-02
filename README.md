# Lexer & Parser

## Building the project

```$ git clone https://codebank.xyz/sharatv/CS411-P2.git```

```$ bison -vd parser.y```

```$ flex lexer.l```

```$ gcc parser.tab.c lex.yy.c -ll -o myparser.out```


## Running the project

```$ ./myparser.out file1.b```

file1.b must be present in the same directory as the executable. 
