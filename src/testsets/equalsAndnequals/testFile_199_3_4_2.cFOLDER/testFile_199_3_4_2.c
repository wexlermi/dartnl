#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((1 * x0 * x2) + (2 * x2 * x2) != 35) {
		printf("I am here at depth 3");
		if ((-1 * 1) == -1) {
			printf("I am here at depth 2");
			if ((1 * 1) != 50) {
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
