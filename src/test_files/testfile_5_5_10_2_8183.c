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

	if ( 2 * x2 * x2 + 4 * x4 * x4 + 5 * x4 * x4 + 5 * x1 * x1 + 2 * x2 * x2 == 1416 ) //x0 = 1, x1= 10, x2= 2, x3= 10, x4= 10
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x1 + 4 * x0 * x2 + 3 * x2 * x2 + 3 * x2 * x3 + 1 * x1 * x3 == 190 ) //x0 = 1, x1= 10, x2= 2, x3= 10, x4= 10
		{
			printf("Solved the if at depth 2.\n");
			if ( 2 * x1 * x1 + 6 * x1 * x4 + 9 * x0 * x3 + 9 * x1 * x1 + 1 * x3 * x4 == 1890 ) //x0 = 1, x1= 10, x2= 2, x3= 10, x4= 10
			{
				printf("Solved the if at depth 3.\n");
				if ( 5 * x2 * x4 + 6 * x3 * x3 + 10 * x2 * x2 + 2 * x0 * x3 + 3 * x1 * x2 == 820 ) //x0 = 1, x1= 10, x2= 2, x3= 10, x4= 10
				{
					printf("Solved the if at depth 4.\n");
					if ( 5 * x3 * x4 + 2 * x0 * x2 + 7 * x1 * x1 + 4 * x4 * x4 + 7 * x4 * x4 == 2304 ) //x0 = 1, x1= 10, x2= 2, x3= 10, x4= 10
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}