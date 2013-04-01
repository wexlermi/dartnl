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

	if ( 2 * x1 * x1 + 5 * x1 * x1 + 8 * x1 * x3 + 3 * x0 * x3 == 245 ) //x0 = 5, x1= 2, x2= 4, x3= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x0 + 10 * x1 * x3 + 7 * x1 * x1 + 3 * x3 * x3 == 515 ) //x0 = 5, x1= 2, x2= 4, x3= 7
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x1 * x1 + 10 * x1 * x1 + 3 * x1 * x1 + 7 * x2 * x2 == 196 ) //x0 = 5, x1= 2, x2= 4, x3= 7
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}