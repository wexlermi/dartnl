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

	if ( 10 * x0 * x2 + 7 * x0 * x0 + 8 * x3 * x4 + 1 * x0 * x2 + 10 * x1 * x1 == 519 ) //x0 = 3, x1= 3, x2= 6, x3= 3, x4= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x0 + 7 * x3 * x3 + 10 * x1 * x2 + 2 * x1 * x4 + 1 * x4 * x4 == 406 ) //x0 = 3, x1= 3, x2= 6, x3= 3, x4= 7
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x1 * x2 + 9 * x2 * x3 + 5 * x2 * x2 + 6 * x2 * x2 + 3 * x2 * x4 == 828 ) //x0 = 3, x1= 3, x2= 6, x3= 3, x4= 7
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}