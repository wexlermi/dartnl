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
	int             x6;
	CREST_int(x6);
	if ((-3 * x0 * x1 * x5) + (-20 * x3 * x4 * x5) + (-3 * x0 * x5 * x5) + (1 * x0 * x2) == -4860) {
		printf("I am here at depth 6");
		if ((6 * x1 * x1 * x4) + (-3 * x1 * x2) + (9 * x1 * x4) + (9 * x0 * x5) + (-1 * x4 * x6) == -540) {
			printf("I am here at depth 5");
			if ((-1 * x1 * x1 * x3) + (-12 * x1 * x3 * x3) + (-7 * x0 * x0 * x6) == 435) {
				printf("I am here at depth 4");
				if ((-54 * x0 * x2 * x3) + (-1 * x1 * x4 * x4) + (2 * x2 * x2 * x6) + (1 * x0 * x3) == 3044) {
					printf("I am here at depth 3");
					if ((-2 * x1 * x3 * x4) + (-1 * x0 * x1 * x5) + (2 * x1 * x1) == 594) {
						printf("I am here at depth 2");
						if ((1 * x3 * x4 * x5) + (1 * 1) == 15) {
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