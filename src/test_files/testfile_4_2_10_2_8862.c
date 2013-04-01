#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 3 * x1 * x1 + 7 * x0 * x1 == 528 ) //x0 = 10, x1= 6
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x1 * x1 + 3 * x1 * x1 == 360 ) //x0 = 10, x1= 6
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x0 * x0 + 6 * x1 * x1 == 1016 ) //x0 = 10, x1= 6
			{
				printf("Solved the if at depth 3.\n");
				if ( 3 * x1 * x1 + 8 * x1 * x1 == 396 ) //x0 = 10, x1= 6
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}