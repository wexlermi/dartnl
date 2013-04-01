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

	if ( 9 * x0 * x0 + 8 * x2 * x2 + 5 * x1 * x1 == 1246 ) //x0 = 7, x1= 1, x2= 10
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x1 + 7 * x1 * x1 + 9 * x0 * x0 == 504 ) //x0 = 7, x1= 1, x2= 10
		{
			printf("Solved the if at depth 2.\n");
			if ( 6 * x1 * x1 + 4 * x0 * x0 + 9 * x0 * x0 == 643 ) //x0 = 7, x1= 1, x2= 10
			{
				printf("Solved the if at depth 3.\n");
				if ( 10 * x1 * x1 + 5 * x0 * x0 + 9 * x0 * x1 == 318 ) //x0 = 7, x1= 1, x2= 10
				{
					printf("Solved the if at depth 4.\n");
					if ( 1 * x1 * x1 + 8 * x0 * x0 + 8 * x2 * x2 == 1193 ) //x0 = 7, x1= 1, x2= 10
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}