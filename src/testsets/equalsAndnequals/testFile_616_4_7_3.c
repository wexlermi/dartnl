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
	if ((-1 * x1 * x3 * x3) + (-6 * x2 * x2 * x4) + (2 * x0 * x3 * x4) + (2 * x3 * x6 * x6) != -141) {
		printf("I am here at depth 4");
		if ((-1 * x1 * x5 * x6) != 175) {
			printf("I am here at depth 3");
			if ((-1 * x1 * x6) != 11) {
				printf("I am here at depth 2");
				if ((-1 * x1 * x1 * x3) + (4 * x0 * x2 * x4) + (-2 * x1 * x6 * x6) + (5 * x4 * x6 * x6) == 562) {
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
