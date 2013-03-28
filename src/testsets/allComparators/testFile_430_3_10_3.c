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
	int             x6;
	int             x7;
	int             x8;
	int             x9;
	if ((1 * x2 * x3 * x5) + (1 * x1 * x4 * x7) + (-1 * x4 * x7 * x7) >= -41) {
		printf("I am here at depth 3");
		if ((1 * x2 * x2 * x4) + (1 * x5 * x5 * x5) + (-21 * x1 * x4) != 701) {
			printf("I am here at depth 2");
			if ((2 * x3 * x3 * x5) + (-3 * x3 * x5 * x9) == 0) {
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
