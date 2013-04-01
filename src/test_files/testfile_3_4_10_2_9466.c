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

	if ( 6 * x1 * x2 + 10 * x1 * x2 + 8 * x1 * x2 + 8 * x1 * x2 == 1024 ) //x0 = 4, x1= 4, x2= 8, x3= 8
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x2 * x3 + 1 * x3 * x3 + 5 * x2 * x2 + 7 * x2 * x2 == 1280 ) //x0 = 4, x1= 4, x2= 8, x3= 8
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x0 * x1 + 2 * x1 * x3 + 6 * x1 * x2 + 2 * x0 * x3 == 368 ) //x0 = 4, x1= 4, x2= 8, x3= 8
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}