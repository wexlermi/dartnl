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

	if ( 6 * x0 * x2 + 2 * x2 * x3 + 9 * x0 * x0 + 10 * x2 * x2 == 744 ) //x0 = 4, x1= 4, x2= 6, x3= 8
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x0 * x0 + 9 * x0 * x0 + 3 * x2 * x2 + 8 * x0 * x0 == 492 ) //x0 = 4, x1= 4, x2= 6, x3= 8
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x2 * x2 + 3 * x0 * x1 + 6 * x1 * x1 + 7 * x0 * x2 == 420 ) //x0 = 4, x1= 4, x2= 6, x3= 8
			{
				printf("Solved the if at depth 3.\n");
				if ( 7 * x1 * x1 + 9 * x1 * x3 + 8 * x2 * x2 + 7 * x3 * x3 == 1136 ) //x0 = 4, x1= 4, x2= 6, x3= 8
				{
					printf("Solved the if at depth 4.\n");
					if ( 9 * x1 * x1 + 2 * x2 * x2 + 10 * x0 * x1 + 3 * x3 * x3 == 568 ) //x0 = 4, x1= 4, x2= 6, x3= 8
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}