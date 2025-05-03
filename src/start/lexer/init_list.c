#include "../../../include/lexer.h"

void init_list(token_list* arr) {
	arr->tokens = NULL;
	arr->capacity = 0;
	arr->count = 0;
}
