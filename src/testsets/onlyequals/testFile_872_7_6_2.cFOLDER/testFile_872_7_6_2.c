#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	int             x2;
	CREST_int(x2);
	int             x3;
	CREST_int(x3);
	int             x4;
	CREST_int(x4);
	int             x5;
	CREST_int(x5);
	if ((-1 * x1 * x3) + (5 * 1) == 35) {
		printf("I am here at depth 7");
		if ((-2 * x2) == -14) {
			printf("I am here at depth 6");
			if ((-9 * x3 * x4) + (-1 * x1) == 358) {
				printf("I am here at depth 5");
				if ((1 * x2 * x2) + (-1 * x3 * x3) + (1 * x0 * x5) == -5) {
					printf("I am here at depth 4");
					if ((-5 * x0 * x3) + (-4 * x0) + (-1 * x2) == 228) {
						printf("I am here at depth 3");
						if ((1 * x5) == -1) {
							printf("I am here at depth 2");
							if ((2 * x2 * x5) + (-3 * x5 * x5) == -64) {
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
