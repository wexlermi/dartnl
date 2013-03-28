#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((66 * x0 * x0 * x0 * x1) + (2 * x1 * x2 * x2) + (5 * x1 * x1) != -168) {
		printf("I am here at depth 3");
		if ((1 * x0 * x1 * x1 * x1) + (-1 * x0 * x2 * x2 * x2) + (1 * x0 * x0 * x2 * x3) + (1 * x0 * x2 * x3 * x3) + (6 * x1 * x1 * x2) + (-1 * x1 * x2 * x3) + (2 * x0 * x3 * x3) + (1 * x2 * x3) + (1 * x2) + (-2 * 1) == 3352) {
			printf("I am here at depth 2");
			if ((3 * x1 * x1 * x2 * x3) + (9 * x0 * x1 * x2) + (-2 * x2 * x3) != 526) {
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
