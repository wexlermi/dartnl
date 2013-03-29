#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	if ((1 * x0 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1 * x1) + (-3 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x1 * x1 * x1) + (1 * x0 * x0 * x0) + (1 * x0 * x0) == 715308) {
		printf("I am here at depth 8");
		if ((1 * x0 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x0 * x0 * x1) + (4 * x0 * x1 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1) + (1 * x1 * x1 * x1) + (1 * x0 * x0) + (1 * x1 * x1) + (-13 * x0) + (-26 * x1) == -51248) {
			printf("I am here at depth 7");
			if ((-1 * x0 * x1 * x1 * x1 * x1 * x1) + (4 * x0 * x0 * x0 * x0) + (2 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x1 * x1) == 104766) {
				printf("I am here at depth 6");
				if ((1 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1 * x1 * x1) + (2 * x1 * x1 * x1 * x1 * x1) + (3 * x0 * x0 * x0) + (1 * x0 * x0 * x1) + (-2 * x0 * x0) == -120815) {
					printf("I am here at depth 5");
					if ((-9 * x0 * x0 * x1 * x1 * x1 * x1) + (5 * x0 * x0 * x0 * x0 * x0) + (6 * x0 * x0 * x0) == 287955) {
						printf("I am here at depth 4");
						if ((-2 * x0 * x0 * x0 * x0 * x0 * x1) + (-1 * x0 * x1 * x1 * x1 * x1 * x1) + (-2 * x1 * x1 * x1 * x1 * x1 * x1) + (-9 * x0 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x1 * x1 * x1) + (2 * x0 * x1 * x1 * x1 * x1) + (13 * x0 * x0 * x0 * x1) + (-2 * x0 * x0 * x1 * x1) + (-4 * x0 * x1 * x1 * x1) + (-3 * x0 * x1 * x1) + (3 * x0 * x0) == -2) {
							printf("I am here at depth 3");
							if ((2 * x0 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x0 * x0) + (-1 * x1 * x1 * x1 * x1) + (1 * x1) == 384) {
								printf("I am here at depth 2");
								if ((-1 * x0 * x0 * x0 * x1 * x1 * x1) + (2 * x0 * x0 * x1 * x1 * x1 * x1) + (1 * x0 * x0) == 36) {
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
