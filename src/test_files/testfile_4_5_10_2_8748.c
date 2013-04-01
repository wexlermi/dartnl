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

	if ( 3 * x1 * x2 + 4 * x0 * x0 + 1 * x2 * x2 + 2 * x0 * x3 + 3 * x0 * x0 == 121 ) //x0 = 3, x1= 1, x2= 4, x3= 5, x4= 2
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x2 * x2 + 4 * x1 * x3 + 2 * x2 * x2 + 1 * x2 * x3 + 3 * x4 * x4 == 212 ) //x0 = 3, x1= 1, x2= 4, x3= 5, x4= 2
		{
			printf("Solved the if at depth 2.\n");
			if ( 5 * x0 * x3 + 2 * x4 * x4 + 9 * x4 * x4 + 8 * x1 * x4 + 6 * x2 * x4 == 183 ) //x0 = 3, x1= 1, x2= 4, x3= 5, x4= 2
			{
				printf("Solved the if at depth 3.\n");
				if ( 6 * x0 * x2 + 8 * x2 * x2 + 10 * x2 * x2 + 4 * x0 * x2 + 1 * x0 * x1 == 411 ) //x0 = 3, x1= 1, x2= 4, x3= 5, x4= 2
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}