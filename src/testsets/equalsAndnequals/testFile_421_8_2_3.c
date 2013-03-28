#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((1 * x1 * x1) + (-1 * x1) == 56) {
		printf("I am here at depth 8");
		if ((-3 * x0 * x0 * x0) + (1 * x0 * x0 * x1) + (1 * x0) == 0) {
			printf("I am here at depth 7");
			if ((3 * x0 * x0 * x0) + (4 * x1 * x1 * x1) + (-2 * x0 * x1) + (-1 * x1 * x1) + (92 * x1) == 1619) {
				printf("I am here at depth 6");
				if ((-2 * x0 * x0 * x1) == -648) {
					printf("I am here at depth 5");
					if ((-27 * x0 * x1) == 1890) {
						printf("I am here at depth 4");
						if ((-2 * x1) == 10) {
							printf("I am here at depth 3");
							if ((-1 * x0 * x0 * x0) + (-2 * x1 * x1 * x1) + (-1 * x0) + (-1 * 1) == -337) {
								printf("I am here at depth 2");
								if ((1 * x0 * x0 * x0) + (-1 * x1 * x1 * x1) + (-1 * x0 * x0) + (2 * x1) == -52) {
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
	} else {
		printf("I am at the else of depth 8");
	}
}
