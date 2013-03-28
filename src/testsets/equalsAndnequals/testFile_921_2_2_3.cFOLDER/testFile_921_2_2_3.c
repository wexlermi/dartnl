#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((-17 * x0 * x1 * x1) + (-2 * x1 * x1 * x1) + (-1 * 1) != 6501) {
		printf("I am here at depth 2");
		if ((-9 * x0 * x0 * x1) + (-2 * x0 * x1 * x1) + (-2 * x1 * x1) != -96) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
