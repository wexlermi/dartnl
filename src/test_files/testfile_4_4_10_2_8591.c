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

	if ( 5 * x0 * x0 + 9 * x3 * x3 + 7 * x1 * x3 + 5 * x2 * x2 == 390 ) //x0 = 2, x1= 4, x2= 1, x3= 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 2 * x2 * x2 + 9 * x0 * x1 + 2 * x1 * x1 + 4 * x3 * x3 == 206 ) //x0 = 2, x1= 4, x2= 1, x3= 5
		{
			printf("Solved the if at depth 2.\n");
			if ( 4 * x3 * x3 + 3 * x2 * x2 + 1 * x1 * x1 + 2 * x1 * x1 == 151 ) //x0 = 2, x1= 4, x2= 1, x3= 5
			{
				printf("Solved the if at depth 3.\n");
				if ( 1 * x0 * x2 + 9 * x1 * x1 + 2 * x2 * x2 + 6 * x0 * x0 == 172 ) //x0 = 2, x1= 4, x2= 1, x3= 5
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}