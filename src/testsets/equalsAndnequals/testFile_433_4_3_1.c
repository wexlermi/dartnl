#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((-2 * x2) == 0) {
		printf("I am here at depth 4");
		if ((-6 * 1) != 90) {
			printf("I am here at depth 3");
			if ((-1 * x2) == -10) {
				printf("I am here at depth 2");
				if ((-3 * x2) == -9) {
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
