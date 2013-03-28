#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	if ((1 * x) == 3) {
		printf("I am here at depth 8");
		if ((-1 * x) == 6) {
			printf("I am here at depth 7");
			if ((5 * x) == 0) {
				printf("I am here at depth 6");
				if ((-24 * x) == -96) {
					printf("I am here at depth 5");
					if ((52 * x) == -468) {
						printf("I am here at depth 4");
						if ((-1 * x) == -5) {
							printf("I am here at depth 3");
							if ((-3 * x) == -12) {
								printf("I am here at depth 2");
								if ((1 * x) == -4) {
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
