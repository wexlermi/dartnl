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
	if ((-2 * x0 * x0 * x0 * x3 * x6) + (1 * x0 * x0 * x1 * x1) == -684) {
		printf("I am here at depth 3");
		if ((2 * x4 * x4 * x5 * x5 * x6) == -51200) {
			printf("I am here at depth 2");
			if ((4 * x2 * x4 * x5 * x5 * x6) + (-1 * x0 * x0 * x3 * x5) == -19892) {
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
