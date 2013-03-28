#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((-3 * x0 * x0 * x1) + (2 * x1 * x2 * x2) + (1 * x1 * x2) == 2) {
		printf("I am here at depth 1");

	} else {
		printf("I am at the else of depth 1");
	}
}
