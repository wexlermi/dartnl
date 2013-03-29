#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	if ((-1 * 1) == -1) {
		printf("I am here at depth 8");
		if ((1 * 1) == 1) {
			printf("I am here at depth 7");
			if ((6 * x) == -6) {
				printf("I am here at depth 6");
				if ((9 * x) == 9) {
					printf("I am here at depth 5");
					if ((4 * x * x) + (1 * x) == 14) {
						printf("I am here at depth 4");
						if ((5 * x * x) + (3 * x) + (8 * 1) == 538) {
							printf("I am here at depth 3");
							if ((2 * 1) == 2) {
								printf("I am here at depth 2");
								if ((27 * 1) == 27) {
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
