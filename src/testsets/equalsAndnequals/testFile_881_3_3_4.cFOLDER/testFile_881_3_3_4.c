#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((-1 * x0 * x0 * x1 * x2) + (-1 * x0 * x1 * x2) + (-74 * x0 * x2) == -2080) {
		printf("I am here at depth 3");
		if ((-1 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x0 * x2) + (4 * x0 * x1 * x1) + (-3 * x1 * x2 * x2) + (1 * x1 * x2) + (-1 * x2 * x2) == -150) {
			printf("I am here at depth 2");
			if ((-2 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x2 * x2) + (-4 * x0 * x2 * x2 * x2) + (1 * x1 * x2 * x2 * x2) + (7 * x0 * x1 * x1) + (2 * x0 * x2 * x2) + (1 * x2 * x2) + (4 * x1) != 595) {
				printf("I am here at depth 1");

			} else {
				printf("I am at the else of depth 1");
			}
		} else {
			printf("I am at the else of depth 2");
		}
	} else {
		printf("I am at the else of depth 3");
	}
}
