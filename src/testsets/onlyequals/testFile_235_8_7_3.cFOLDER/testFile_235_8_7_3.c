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
	if ((-1 * x0 * x1 * x3) + (1 * x0 * x3 * x4) + (2 * x0 * x5 * x5) + (-3 * x3 * x4 * x6) + (-1 * x0 * x4) == 1098) {
		printf("I am here at depth 8");
		if ((-3 * x1) == 27) {
			printf("I am here at depth 7");
			if ((3 * x0 * x1 * x4) + (-2 * x1 * x3 * x4) + (3 * x2 * x3 * x6) == 846) {
				printf("I am here at depth 6");
				if ((-1 * x3 * x3 * x3) + (9 * x1 * x1) + (-1 * x0 * x2) + (1 * 1) == 725) {
					printf("I am here at depth 5");
					if (== 0) {
						printf("I am here at depth 4");
						if ((-1 * x4 * x4 * x6) + (-1 * x2 * x6 * x6) + (-1 * x0 * x4) + (-1 * x2 * x4) == 612) {
							printf("I am here at depth 3");
							if ((-11 * x0 * x1 * x1) + (-39 * x2 * x2 * x5) + (-1 * x3 * x4) + (1 * x0 * x6) == 1366) {
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
