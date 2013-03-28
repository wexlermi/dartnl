#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((-27 * x1 * x2) == 0) {
		printf("I am here at depth 4");
		if ((2 * x0 * x2) == 10) {
			printf("I am here at depth 3");
			if ((15 * x0 * x1) + (1 * x1 * x1) + (1 * x1) == -195) {
				printf("I am here at depth 2");
				if ((1 * x2) == -9) {
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
