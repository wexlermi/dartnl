#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	int             x5;
	int             x6;
	int             x7;
	int             x8;
	int             x9;
	int             x10;
	if (== 0) {
		printf("I am here at depth 10");
		if ((2 * 1) == 2) {
			printf("I am here at depth 9");
			if ((-2 * x2) == -8) {
				printf("I am here at depth 8");
				if ((1 * x4) == 1) {
					printf("I am here at depth 7");
					if ((1 * x8) == 7) {
						printf("I am here at depth 6");
						if ((-4 * x9) == -32) {
							printf("I am here at depth 5");
							if ((1 * x4) == -7) {
								printf("I am here at depth 4");
								if ((1 * x6) == -6) {
									printf("I am here at depth 3");
									if ((5 * x9) == 50) {
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
		} else {
			printf("I am at the else of depth 9");
		}
	} else {
		printf("I am at the else of depth 10");
	}
}