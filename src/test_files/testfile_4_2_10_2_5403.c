#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 2 * x0 * x0 + 3 * x0 * x0 == 180 ) //x0 = 6, x1= 8
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x0 * x0 + 1 * x1 * x1 == 172 ) //x0 = 6, x1= 8
		{
			printf("Solved the if at depth 2.\n");
			if ( 10 * x0 * x0 + 9 * x0 * x1 == 792 ) //x0 = 6, x1= 8
			{
				printf("Solved the if at depth 3.\n");
				if ( 7 * x0 * x1 + 4 * x0 * x0 == 480 ) //x0 = 6, x1= 8
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}