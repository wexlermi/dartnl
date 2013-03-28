#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	int             x5;
	int             x6;
	int             x7;
	if ((-1 * x1 * x3) + (2 * x2 * x7) != -67) {
		printf("I am here at depth 7");
		if ((-1 * x0 * x2) + (-1 * x4 * x6) != -4) {
			printf("I am here at depth 6");
			if ((1 * x2 * x6) == 0) {
				printf("I am here at depth 5");
				if ((-2 * x4 * x5) + (-2 * x3 * x6) == 22) {
					printf("I am here at depth 4");
					if ((-1 * x0 * x5) == 16) {
						printf("I am here at depth 3");
						if ((1 * x1 * x3) == -7) {
							printf("I am here at depth 2");
							if ((1 * x1 * x4) + (1 * x0 * x5) + (-3 * x2) == -98) {
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
	} else {
		printf("I am at the else of depth 7");
	}
}
