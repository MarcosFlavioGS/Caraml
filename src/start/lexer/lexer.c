#include "../../../include/lexer.h"

token_list* lexer(char* filepath) {
	(void)filepath;

	token_list* result;
	token_list token_lst;

	init_list(&token_lst);

	token_t token;
	token.data.text = "let";
	token.identifier = "let";
	token.type = TOK_KEYWORD;

	token_lst.tokens = (token_t*)calloc(4, sizeof(token_t));
	token_lst.capacity = 4;
	token_lst.count = 1;

	token_lst.tokens[0] = token;

	printf("%s", token_lst.tokens[0].identifier);
	// TODO: Write the lexer

	result = &token_lst;
	return result;
}
