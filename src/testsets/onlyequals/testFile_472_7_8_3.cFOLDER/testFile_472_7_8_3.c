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
	int             x7;
	CREST_int(x7);
	if ((1 * x0 * x2 * x2) + (8 * x0 * x7 * x7) + (1 * x1 * x1) == -207) {
		printf("I am here at depth 7");
		if ((-2 * x2 * x2 * x6) + (1 * x6 * x6 * x6) + (37 * x1 * x1) == 3677) {
			printf("I am here at depth 6");
			if ((-2 * x1 * x4 * x5) + (3 * x3 * x6 * x6) == 504) {
				printf("I am here at depth 5");
				if ((24 * x1 * x1 * x1) + (-5 * x2 * x2 * x4) + (-1 * x4) == 1941) {
					printf("I am here at depth 4");
					if ((7 * x2 * x5 * x6) + (2 * x3 * x4) + (-3 * x5 * x5) + (-1 * x0 * x7) == -1432) {
						printf("I am here at depth 3");
						if ((6 * x1 * x3 * x7) + (1 * x0 * x6 * x7) + (1 * x4 * x5) + (-3 * x0 * x7) + (-1 * x4 * x7) == -146) {
							printf("I am here at depth 2");
							if ((-61 * x0 * x2 * x2) == -5978) {
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