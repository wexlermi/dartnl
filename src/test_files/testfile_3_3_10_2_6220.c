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

	if ( 7 * x0 * x2 + 7 * x2 * x2 + 2 * x0 * x0 == 709 ) //x0 = 6, x1= 5, x2= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x2 + 2 * x0 * x0 + 7 * x0 * x1 == 324 ) //x0 = 6, x1= 5, x2= 7
		{
			printf("Solved the if at depth 2.\n");
			if ( 1 * x1 * x2 + 2 * x0 * x2 + 3 * x1 * x2 == 224 ) //x0 = 6, x1= 5, x2= 7
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}