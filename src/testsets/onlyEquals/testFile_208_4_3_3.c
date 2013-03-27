#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((9 * x0 * x0 * x2) + (-6 * x0 * x1 * x2) + (-3 * x1 * x2) + (1 * x2) == 4772646) {
		printf("I am here at depth 4");
		if ((-22 * x0 * x1 * x2) + (-3 * x1 * x1 * x2) + (1 * x0 * x2 * x2) + (-2 * x1 * x2 * x2) + (-4 * x2 * x2) == 4616436809) {
			printf("I am here at depth 3");
			if ((1 * x1 * x1 * x1) + (1 * x0 * x2 * x2) + (-21 * x1 * x2) + (-5 * x2) == 253379846) {
				printf("I am here at depth 2");
				if ((1 * x0 * x1 * x2) + (-2 * x0 * x0) + (1 * x1 * x1) + (4 * x1 * x2) + (-1 * x2 * x2) + (-2 * x1) == -136278669) {
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
