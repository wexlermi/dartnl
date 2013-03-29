#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	if ((1 * x * x) + (-1 * x) == 42) {
		printf("I am here at depth 8");
		if ((2 * 1) == 2) {
			printf("I am here at depth 7");
			if ((-1 * x * x) + (1 * x) + (1 * 1) == -11) {
				printf("I am here at depth 6");
				if ((-1 * x * x) + (2 * x) == -3) {
					printf("I am here at depth 5");
					if ((1 * x * x) + (451 * x) + (1 * 1) == 4141) {
						printf("I am here at depth 4");
						if ((-10 * x * x) + (-1 * x) + (-6 * 1) == -261) {
							printf("I am here at depth 3");
							if ((3 * x) + (2 * 1) == -4) {
								printf("I am here at depth 2");
								if (== 0) {
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
