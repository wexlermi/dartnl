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
	if ((-1 * x5) == 10) {
		printf("I am here at depth 3");
		if ((-4 * x7) == 32) {
			printf("I am here at depth 2");
			if ((-3 * x6) == -21) {
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
