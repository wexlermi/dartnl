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
	int x4;
	CREST_int(x4);

	if ( 6 * x2 * x2 + 10 * x0 * x3 + 3 * x1 * x1 + 1 * x1 * x2 + 3 * x4 * x4 == 738 ) //x0 = 9, x1= 9, x2= 1, x3= 2, x4= 10
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x4 * x4 + 5 * x2 * x4 + 9 * x1 * x3 + 5 * x1 * x1 + 9 * x3 * x3 == 1653 ) //x0 = 9, x1= 9, x2= 1, x3= 2, x4= 10
		{
			printf("Solved the if at depth 2.\n");
			if ( 2 * x0 * x1 + 7 * x0 * x4 + 5 * x1 * x3 + 5 * x1 * x1 + 10 * x0 * x3 == 1467 ) //x0 = 9, x1= 9, x2= 1, x3= 2, x4= 10
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}