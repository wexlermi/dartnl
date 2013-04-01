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

	if ( 1 * x2 * x2 + 1 * x0 * x0 + 7 * x2 * x2 == 108 ) //x0 = 6, x1= 9, x2= 3
	{
		printf("Solved the if at depth 1.\n");
		if ( 9 * x0 * x1 + 7 * x1 * x1 + 8 * x1 * x2 == 1269 ) //x0 = 6, x1= 9, x2= 3
		{
			printf("Solved the if at depth 2.\n");
			if ( 5 * x2 * x2 + 1 * x1 * x1 + 9 * x0 * x0 == 450 ) //x0 = 6, x1= 9, x2= 3
			{
				printf("Solved the if at depth 3.\n");
				if ( 3 * x0 * x0 + 7 * x0 * x0 + 4 * x2 * x2 == 396 ) //x0 = 6, x1= 9, x2= 3
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}