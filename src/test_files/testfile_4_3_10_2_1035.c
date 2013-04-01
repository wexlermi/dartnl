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

	if ( 1 * x0 * x0 + 6 * x1 * x2 + 8 * x0 * x1 == 336 ) //x0 = 4, x1= 4, x2= 8
	{
		printf("Solved the if at depth 1.\n");
		if ( 5 * x0 * x0 + 10 * x0 * x1 + 7 * x1 * x1 == 352 ) //x0 = 4, x1= 4, x2= 8
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x0 * x1 + 10 * x1 * x2 + 8 * x1 * x1 == 496 ) //x0 = 4, x1= 4, x2= 8
			{
				printf("Solved the if at depth 3.\n");
				if ( 10 * x0 * x0 + 2 * x0 * x2 + 8 * x2 * x2 == 736 ) //x0 = 4, x1= 4, x2= 8
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}