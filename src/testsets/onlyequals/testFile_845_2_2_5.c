#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((1 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x1) + (-2 * x1 * x1 * x1) + (1 * 1) == 19) {
		printf("I am here at depth 2");
		if ((-1 * x0 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x1 * x1 * x1) + (2 * x0 * x0 * x0 * x1) + (3 * x0 * x0 * x1 * x1) + (1 * x1 * x1 * x1 * x1) + (-2 * x0 * x1 * x1) + (-39 * x1 * x1 * x1) + (-95 * x0 * x0) + (3 * x0 * x1) + (1 * x1 * x1) + (1 * x1) + (1 * 1) == -52898) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
