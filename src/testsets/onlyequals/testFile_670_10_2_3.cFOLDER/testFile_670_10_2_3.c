#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	if ((2 * x1 * x1 * x1) + (-1 * x0 * x1) == 1377) {
		printf("I am here at depth 10");
		if ((-1 * x0 * x1 * x1) + (-4 * x1 * x1 * x1) + (1 * x0 * x0) + (4 * x0 * x1) + (4 * x0) == -23) {
			printf("I am here at depth 9");
			if ((1 * x1 * x1) == 25) {
				printf("I am here at depth 8");
				if ((1 * x1 * x1) == 1) {
					printf("I am here at depth 7");
					if ((1 * x1 * x1 * x1) + (2 * 1) == -123) {
						printf("I am here at depth 6");
						if ((-1 * x0 * x0 * x1) + (1 * x1 * x1) == 65) {
							printf("I am here at depth 5");
							if ((-1 * x0 * x1 * x1) + (1 * x0 * x0) + (26 * x0 * x1) + (-1 * x0) + (-1 * 1) == -2631) {
								printf("I am here at depth 4");
								if (== 0) {
									printf("I am here at depth 3");
									if ((3 * x0 * x0 * x0) + (4 * x0 * x1 * x1) + (-1 * x1 * x1 * x1) + (7 * x0 * x1) + (-2 * x0) == 1715) {
										printf("I am here at depth 2");
										if ((1 * x0 * x0 * x0) + (-1 * x1 * x1 * x1) + (-3 * x1 * x1) + (1 * x0) + (-1 * x1) == -851) {
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
	} else {
		printf("I am at the else of depth 10");
	}
}
