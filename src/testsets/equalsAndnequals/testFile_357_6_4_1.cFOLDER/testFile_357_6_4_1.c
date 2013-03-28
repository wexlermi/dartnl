#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if (== 0) {
		printf("I am here at depth 6");
		if (== 0) {
			printf("I am here at depth 5");
			if (== 0) {
				printf("I am here at depth 4");
				if ((1 * x3) != 95) {
					printf("I am here at depth 3");
					if ((17 * x2) != 98) {
						printf("I am here at depth 2");
						if ((1 * x2) == 8) {
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
		} else {
			printf("I am at the else of depth 5");
		}
	} else {
		printf("I am at the else of depth 6");
	}
}
