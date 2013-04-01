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

	if ( 8 * x0 * x0 + 4 * x0 * x3 + 7 * x0 * x1 + 4 * x3 * x3 == 396 ) //x0 = 5, x1= 4, x2= 5, x3= 2
	{
		printf("Solved the if at depth 1.\n");
		if ( 4 * x3 * x3 + 5 * x0 * x3 + 3 * x3 * x3 + 8 * x0 * x1 == 238 ) //x0 = 5, x1= 4, x2= 5, x3= 2
		{
			printf("Solved the if at depth 2.\n");
			if ( 10 * x1 * x2 + 7 * x2 * x2 + 9 * x0 * x1 + 8 * x2 * x3 == 635 ) //x0 = 5, x1= 4, x2= 5, x3= 2
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}