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
	if ((1 * x0 * x3 * x4) + (-1 * x2 * x6 * x6) + (1 * x8 * x8 * x9) + (-6 * x9 * x9 * x9) == -1206) {
		printf("I am here at depth 4");
		if ((-2 * x0 * x2 * x5) + (1 * x4 * x5 * x8) + (-8 * x0 * x7 * x9) + (2 * x1 * x1) + (29 * 1) == -431) {
			printf("I am here at depth 3");
			if ((-8 * x1 * x1 * x1) + (-1 * x4 * x4 * x6) + (7 * x3 * x5 * x7) + (-4 * x3 * x4 * x8) + (1 * x3 * x6) + (-2 * x0 * x8) == -1776) {
				printf("I am here at depth 2");
				if ((6 * x1 * x2 * x7) + (6 * x4 * x4 * x7) + (-1 * x2 * x7 * x8) + (1 * x2 * x2) + (-1 * x1 * x7) == 80) {
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
}
