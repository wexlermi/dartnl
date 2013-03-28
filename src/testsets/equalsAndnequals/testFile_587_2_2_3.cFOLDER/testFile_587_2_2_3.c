#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((-3 * x0 * x0 * x0) + (-2 * x1 * x1 * x1) + (1 * x0 * x1) + (2 * x1 * x1) + (2 * 1) == -899) {
		printf("I am here at depth 2");
		if ((-1 * x0 * x1 * x1) + (-2 * x1 * x1) + (-1 * x0) == -78) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
