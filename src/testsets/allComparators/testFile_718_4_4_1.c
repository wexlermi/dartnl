#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((-4 * x1) >= -60) {
		printf("I am here at depth 4");
		if ((2 * x2) > -51) {
			printf("I am here at depth 3");
			if ((-14 * 1) >= -58) {
				printf("I am here at depth 2");
				if ((1 * x3) > -18) {
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
