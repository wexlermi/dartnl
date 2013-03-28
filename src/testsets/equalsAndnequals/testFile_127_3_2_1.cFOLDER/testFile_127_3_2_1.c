#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((1 * 1) != 37) {
		printf("I am here at depth 3");
		if ((-3 * x1) == 3) {
			printf("I am here at depth 2");
			if ((1 * x1) == -6) {
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
