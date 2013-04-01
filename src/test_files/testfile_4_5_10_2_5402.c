#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);
	int x2;
	CREST_int(x2);
	int x3;
	CREST_int(x3);
	int x4;
	CREST_int(x4);

	if ( 3 * x3 * x3 + 3 * x2 * x2 + 4 * x4 * x4 + 5 * x2 * x2 + 1 * x2 * x2 == 433 ) //x0 = 8, x1= 1, x2= 5, x3= 6, x4= 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x4 * x4 + 10 * x2 * x2 + 6 * x3 * x4 + 3 * x3 * x3 + 10 * x3 * x4 == 913 ) //x0 = 8, x1= 1, x2= 5, x3= 6, x4= 5
		{
			printf("Solved the if at depth 2.\n");
			if ( 9 * x0 * x2 + 9 * x4 * x4 + 4 * x1 * x3 + 3 * x0 * x4 + 6 * x0 * x0 == 1113 ) //x0 = 8, x1= 1, x2= 5, x3= 6, x4= 5
			{
				printf("Solved the if at depth 3.\n");
				if ( 10 * x0 * x0 + 10 * x4 * x4 + 1 * x4 * x4 + 1 * x2 * x4 + 2 * x0 * x0 == 1068 ) //x0 = 8, x1= 1, x2= 5, x3= 6, x4= 5
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}