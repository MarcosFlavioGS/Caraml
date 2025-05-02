#include "../../include/arg.h"

/*
** Parses command line arguments.
** Returns enum for errors and 0 for no errors
*/
int arg_parse(int argc, char** argv) {
	(void) argv;

	if (argc < 2) {
		return FEW_ARGUMENTS;
    } else if (argc > 2) {
		// TODO: Check for flags
	}

	return 0;
}
