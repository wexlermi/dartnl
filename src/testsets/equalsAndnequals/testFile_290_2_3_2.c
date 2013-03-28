#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((1 * x0 * x1) != 28) {
		printf("I am here at depth 2");
		if ((-1 * x1 * x1) + (3 * x0 * x2) == -63) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
