#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((-5 * x1 * x1) == -245) {
		printf("I am here at depth 2");
		if ((4 * x0) + (1 * x1) + (2 * 1) == -17) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
