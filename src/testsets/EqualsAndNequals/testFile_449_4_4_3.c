#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((4 * x1 * x3 * x3) != -362582821) {
		printf("I am here at depth 4");
		if ((2 * x0 * x2 * x2) + (1 * x1 * x2 * x2) + (1 * x2 * x2 * x2) + (-14 * x3 * x3 * x3) + (2 * x2 * x2) + (3 * x1 * x3) == -1350599931) {
			printf("I am here at depth 3");
			if ((-12 * x0 * x1 * x2) + (1 * x1 * x2 * x3) == 189930384) {
				printf("I am here at depth 2");
				if ((5 * x0 * x3 * x3) + (7 * x1 * x1) + (-1 * x0) == 447565018) {
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
