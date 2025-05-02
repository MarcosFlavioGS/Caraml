#include "../../../include/lexer.h"

char** lexer(char* filepath) {
	char** result = malloc(sizeof(char*) * 3);

	result[0] = filepath;
	printf("%s", result[0]);
	// TODO: Write the lexer

	return result;
}
