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

	if ( 2 * x0 * x1 + 6 * x2 * x2 + 1 * x1 * x1 + 8 * x0 * x0 == 1442 ) //x0 = 10, x1= 6, x2= 9, x3= 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x3 * x3 + 9 * x0 * x3 + 7 * x0 * x0 + 1 * x0 * x3 == 801 ) //x0 = 10, x1= 6, x2= 9, x3= 1
		{
			printf("Solved the if at depth 2.\n");
			if ( 7 * x1 * x1 + 6 * x3 * x3 + 5 * x2 * x2 + 4 * x1 * x1 == 807 ) //x0 = 10, x1= 6, x2= 9, x3= 1
			{
				printf("Solved the if at depth 3.\n");
				if ( 2 * x3 * x3 + 9 * x2 * x3 + 9 * x0 * x1 + 5 * x0 * x1 == 923 ) //x0 = 10, x1= 6, x2= 9, x3= 1
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}