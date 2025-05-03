#ifndef LEXER_H_
#define LEXER_H_

#include <stdlib.h>
#include <stdio.h>

typedef enum {
    TOK_EOF,
    TOK_IDENTIFIER,
    TOK_KEYWORD,
    TOK_INTEGER,
    TOK_FLOAT,
    TOK_STRING,
    TOK_OPERATOR,
    TOK_PUNCTUATION,
    // …add more as needed
} token_type;

typedef struct {
	char* identifier;
	union {
		char*    text;    // identifiers, keywords, operators, punctuation
        long     int_val; // integer literals
        double   flt_val; // floating‐point literals
        char*    str_val; // string literals
	} data;
	token_type type;
} token_t;

typedef struct {
	token_t* tokens;
	size_t count, capacity;
} token_list;


void init_list(token_list* arr);
token_list* lexer(char* file);

#endif // LEXER_H_
