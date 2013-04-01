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

	if ( 7 * x2 * x2 + 6 * x0 * x1 + 7 * x0 * x0 + 1 * x1 * x3 == 963 ) //x0 = 7, x1= 8, x2= 6, x3= 4
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x2 * x2 + 4 * x0 * x0 + 3 * x1 * x2 + 10 * x1 * x2 == 1072 ) //x0 = 7, x1= 8, x2= 6, x3= 4
		{
			printf("Solved the if at depth 2.\n");
			if ( 2 * x1 * x1 + 2 * x3 * x3 + 1 * x2 * x2 + 7 * x1 * x1 == 644 ) //x0 = 7, x1= 8, x2= 6, x3= 4
			{
				printf("Solved the if at depth 3.\n");
				if ( 6 * x0 * x3 + 9 * x2 * x2 + 6 * x1 * x1 + 3 * x1 * x1 == 1068 ) //x0 = 7, x1= 8, x2= 6, x3= 4
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}