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
	int             x10;
	int             x11;
	int             x12;
	if ((2 * x3 * x8) + (1 * x9 * x9) == 40) {
		printf("I am here at depth 3");
		if ((-2 * x10 * x11) == -60) {
			printf("I am here at depth 2");
			if ((2 * x2 * x3) + (1 * x5 * x8) == 102) {
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