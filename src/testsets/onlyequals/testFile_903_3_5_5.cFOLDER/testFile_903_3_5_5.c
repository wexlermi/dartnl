#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((-1 * x1 * x2 * x3 * x3 * x3) + (1 * x0 * x0 * x2 * x2 * x4) + (-1 * x0 * x0 * x3 * x3) + (7 * x3 * x3 * x4) + (-2 * x0 * x0) + (3 * x4 * x4) == 26364) {
		printf("I am here at depth 3");
		if ((-1 * x0 * x0 * x2 * x3 * x3) + (-2 * x1 * x1 * x1 * x1 * x4) + (1 * x1 * x2 * x2 * x3 * x4) + (-3 * x0 * x2 * x3 * x3 * x4) + (-1 * x1 * x3 * x3 * x3 * x4) + (8 * x1 * x1 * x2) + (23 * x1 * x3 * x3) + (-1 * x0 * x2 * x4) == -19552) {
			printf("I am here at depth 2");
			if ((6 * x0 * x0 * x1 * x2 * x3) + (-2 * x0 * x1 * x1 * x3 * x3) + (6 * x0 * x0 * x2 * x3 * x4) + (6 * x0 * x2 * x3 * x4) + (1 * x1 * x2 * x3) + (2 * x0) == -260930) {
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
