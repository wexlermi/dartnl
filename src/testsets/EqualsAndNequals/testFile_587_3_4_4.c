#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((2 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x1 * x2) + (-2 * x1 * x3 * x3 * x3) + (1 * x0 * x1) == 1662285510) {
		printf("I am here at depth 3");
		if ((1 * x1 * x1 * x1 * x2) + (1 * x1 * x2 * x2 * x2) + (2 * x2 * x2 * x2 * x3) + (6 * x0 * x1 * x3 * x3) + (2 * x0 * x3 * x3 * x3) + (-1 * x0 * x0 * x1) + (-1 * x0 * x0 * x2) + (1 * x1 * x1 * x2) == 1736875901608) {
			printf("I am here at depth 2");
			if ((-1 * x0 * x0 * x1 * x1) + (1 * x0 * x1 * x1 * x3) + (1 * x0 * x1 * x3 * x3) + (1 * x2 * x3 * x3 * x3) + (1 * x0 * x0 * x0) + (1 * x0 * x1 * x2) != -515658343397) {
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
