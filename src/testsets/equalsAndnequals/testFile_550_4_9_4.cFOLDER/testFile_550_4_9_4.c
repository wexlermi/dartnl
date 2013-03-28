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
	if ((2 * x0 * x1 * x3 * x5) + (-1 * x5 * x5 * x7 * x8) != 1591) {
		printf("I am here at depth 4");
		if ((-2 * x5 * x7 * x7) != -1327) {
			printf("I am here at depth 3");
			if ((3 * x0 * x1 * x6 * x6) + (7 * x1 * x3 * x6 * x8) + (1 * x5 * x6 * x6 * x8) + (-4 * x1 * x2 * x7 * x8) != 27) {
				printf("I am here at depth 2");
				if ((1 * x1 * x1 * x4 * x8) + (1 * x3 * x6) != -171) {
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
	} else {
		printf("I am at the else of depth 4");
	}
}
