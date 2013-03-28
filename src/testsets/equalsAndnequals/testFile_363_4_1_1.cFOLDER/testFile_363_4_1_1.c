#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	if ((-18 * x) == 144) {
		printf("I am here at depth 4");
		if ((1 * x) == 10) {
			printf("I am here at depth 3");
			if ((1 * x) == 6) {
				printf("I am here at depth 2");
				if ((-4 * x) == -4) {
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
