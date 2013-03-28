#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	int             x5;
	if ((16 * x2 * x3 * x3 * x3) + (1 * x1 * x3 * x3 * x4) + (1 * x1 * x2 * x4 * x5) + (2 * x5 * x5 * x5 * x5) + (-1 * x1 * x4 * x4) + (1 * x0 * x0 * x5) + (1 * x3 * x4 * x5) != 11444) {
		printf("I am here at depth 3");
		if ((-20 * x0 * x0 * x0 * x2) + (-2 * x2 * x3 * x3 * x3) + (1 * x2 * x3 * x4 * x4) + (9 * x4 * x5 * x5 * x5) + (1 * x4) != -57442) {
			printf("I am here at depth 2");
			if ((4 * x1 * x2 * x3 * x4) + (3 * x0 * x3 * x4 * x5) + (5 * x2 * x4) == -1065) {
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
