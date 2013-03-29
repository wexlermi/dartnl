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
	int             x8;
	CREST_int(x8);
	int             x9;
	CREST_int(x9);
	int             x10;
	CREST_int(x10);
	if ((2 * x1 * x1 * x6 * x6 * x7) + (-1 * x0 * x4 * x5 * x6) + (-1 * x7 * x8 * x9 * x10) == 2785) {
		printf("I am here at depth 5");
		if ((-2 * x1 * x2 * x7 * x7 * x10) + (12 * x5 * x7 * x9) == -2052) {
			printf("I am here at depth 4");
			if ((-1 * x0 * x0 * x2 * x3 * x6) + (-9 * x2 * x3 * x5 * x6 * x6) + (1 * x2 * x5 * x7 * x7 * x8) + (-1 * x4 * x4 * x6 * x7 * x9) + (2 * x1 * x2 * x3 * x4 * x10) + (1 * x0 * x4 * x5 * x5) + (-1 * x0 * x4 * x7 * x8) + (-1 * x4 * x7 * x7) == -10688) {
				printf("I am here at depth 3");
				if ((3 * x1 * x1 * x4 * x4) + (2 * x1 * x1 * x9 * x10) == 6600) {
					printf("I am here at depth 2");
					if ((1 * x1 * x4 * x4 * x7 * x10) + (-3 * x1 * x2 * x8 * x10) == -864) {
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
}
