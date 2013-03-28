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
	if ((1 * x0 * x4 * x7 * x8) == -630) {
		printf("I am here at depth 4");
		if ((1 * x0 * x4 * x7 * x7) + (-14 * x1 * x3 * x4 * x8) + (6 * x1 * x3 * x3) + (4 * x0 * x5 * x6) + (1 * x0 * x6 * x6) + (-1 * x0 * x8 * x8) == -48992) {
			printf("I am here at depth 3");
			if ((1 * x0 * x0 * x1 * x2) + (-3 * x3 * x3 * x3 * x3) + (-6 * x4 * x4 * x6 * x7) + (-1 * x2 * x6 * x7 * x7) + (1 * x2 * x3 * x3) + (-1 * x1 * x1 * x5) + (1 * x5 * x6 * x6) + (-2 * x3 * x5 * x8) == 5768) {
				printf("I am here at depth 2");
				if ((1 * x1 * x2 * x3 * x4) + (14 * x0 * x1 * x1 * x8) + (1 * x0 * x3 * x7 * x8) == 3912) {
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
