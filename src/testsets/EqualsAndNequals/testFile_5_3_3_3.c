#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((-2 * x1 * x2) + (10 * x0) + (-2 * x2) != -1191851) {
		printf("I am here at depth 3");
		if ((-1 * x1 * x1 * x1) + (-3 * x0 * x0) + (-10 * x2 * x2) + (-57 * 1) != -643948460) {
			printf("I am here at depth 2");
			if ((-2 * x1 * x1 * x1) + (-1 * x0 * x2) + (-2 * x1) + (1 * x2) != -1786153977) {
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