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
	if ((1 * x0 * x1 * x1 * x1) + (-1 * x0 * x2 * x2 * x2) + (1 * x0 * x0 * x1) + (1 * x2 * x2 * x2) + (20 * x1 * x1) + (-1 * x1 * x2) + (-3 * x1) + (1 * 1) == -98) {
		printf("I am here at depth 9");
		if ((-1 * x0 * x0 * x2 * x3) + (4 * x0 * x3 * x3 * x3) + (1 * x1 * x3 * x3 * x3) + (-1 * x2 * x3 * x3) + (1 * x3 * x3) + (-3 * 1) == -53) {
			printf("I am here at depth 8");
			if ((2 * x0 * x2 * x3 * x3) == -42) {
				printf("I am here at depth 7");
				if ((1 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x1 * x2) + (-4 * x1 * x2 * x3 * x3) + (1 * x2 * x3 * x3 * x3) + (-15 * x0 * x0 * x0) + (1 * x0 * x0 * x1) + (34 * x0 * x1 * x1) == -240) {
					printf("I am here at depth 6");
					if ((-6 * x0 * x0 * x0 * x3) + (-5 * x0 * x0 * x1 * x3) + (1 * x2 * x3 * x3 * x3) + (1 * x0 * x0 * x0) + (1 * x1 * x1 * x1) + (-1 * x0 * x1 * x2) + (3 * x2 * x2 * x2) + (2 * x3) == -7268) {
						printf("I am here at depth 5");
						if ((-3 * x2 * x2 * x2 * x2) + (3 * x0 * x0 * x2 * x3) + (-6 * x1 * x2 * x2 * x3) + (-1 * x2 * x2 * x2 * x3) + (-1 * x1 * x1 * x3 * x3) + (-3 * x1 * x1 * x3) + (1 * x0 * x2) + (4 * x1 * x3) == -225) {
							printf("I am here at depth 4");
							if ((5 * x0 * x0 * x1 * x1) + (-1 * x1 * x1 * x1 * x3) + (2 * x0 * x1 * x1) + (1 * x3 * x3) == 16333) {
								printf("I am here at depth 3");
								if ((-17 * x1 * x1 * x1 * x1) + (-3 * x1 * x1 * x3 * x3) + (1 * x0 * x2 * x2) + (-3 * x3 * x3 * x3) + (-4 * x0 * x1) == -70297) {
									printf("I am here at depth 2");
									if ((1 * x1 * x1 * x1 * x2) + (3 * x0 * x2 * x3 * x3) + (10 * x2 * x2 * x3 * x3) == 15505) {
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
	} else {
		printf("I am at the else of depth 9");
	}
}
