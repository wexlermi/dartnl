#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 6 * x1 * x1 + 10 * x0 * x0 == 474 ) //x0 = 3, x1= 8
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x1 * x1 + 4 * x0 * x0 == 100 ) //x0 = 3, x1= 8
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x0 * x0 + 9 * x1 * x1 == 603 ) //x0 = 3, x1= 8
			{
				printf("Solved the if at depth 3.\n");
				if ( 4 * x1 * x1 + 8 * x0 * x0 == 328 ) //x0 = 3, x1= 8
				{
					printf("Solved the if at depth 4.\n");
					if ( 4 * x1 * x1 + 5 * x1 * x1 == 576 ) //x0 = 3, x1= 8
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}