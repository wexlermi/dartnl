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

	if ( 10 * x0 * x0 + 9 * x1 * x2 + 5 * x1 * x1 == 1002 ) //x0 = 5, x1= 8, x2= 6
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x0 * x0 + 6 * x1 * x1 + 3 * x2 * x2 == 567 ) //x0 = 5, x1= 8, x2= 6
		{
			printf("Solved the if at depth 2.\n");
			if ( 10 * x0 * x0 + 9 * x1 * x1 + 2 * x1 * x1 == 954 ) //x0 = 5, x1= 8, x2= 6
			{
				printf("Solved the if at depth 3.\n");
				if ( 3 * x0 * x1 + 9 * x1 * x2 + 5 * x1 * x1 == 872 ) //x0 = 5, x1= 8, x2= 6
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}