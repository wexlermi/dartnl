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
	int             x11;
	CREST_int(x11);
	int             x12;
	CREST_int(x12);
	if ((1 * x2 * x5) + (7 * x3 * x8) == -129) {
		printf("I am here at depth 4");
		if ((-1 * x0 * x1) + (-1 * x2 * x3) + (-1 * x9 * x9) == -136) {
			printf("I am here at depth 3");
			if ((-1 * x6 * x11) == -20) {
				printf("I am here at depth 2");
				if ((1 * x5 * x8) == 8) {
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