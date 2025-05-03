#include "../../include/start.h"
#include "../../include/lexer.h"
#include <stddef.h>

void start(char** argv) {
	token_list* tokens;

	tokens = lexer(argv[1]);

	for (size_t i = 0; i < tokens->count; i++) {
		printf("%s", tokens->tokens[i].identifier);
	}
	// TODO: parser
}
