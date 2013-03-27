#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((1 * x0 * x1 * x2 * x2 * x2) == 1762621876224) {
		printf("I am here at depth 4");
		if ((1 * x0 * x1 * x2 * x2) + (-4 * x2 * x2 * x2) + (1 * x0 * x0) == 4089666205) {
			printf("I am here at depth 3");
			if ((-1 * x0 * x1 * x1 * x1 * x1) + (-1 * x0 * x2 * x2 * x2 * x2) + (1 * x0 * x0) + (1 * x1) == -1218050853257708) {
				printf("I am here at depth 2");
				if ((1 * x0 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x0 * x0 * x2) + (2 * x0 * x1 * x1 * x1 * x2) + (1 * x0 * x0 * x0 * x2 * x2) + (4 * x1 * x2 * x2 * x2 * x2) + (5 * x1 * x2 * x2 * x2) + (-1 * x1 * x1 * x1) + (1 * x0 * x2 * x2) == -13183042786752) {
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
