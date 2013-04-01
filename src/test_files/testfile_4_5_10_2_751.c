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

	if ( 3 * x2 * x2 + 10 * x1 * x1 + 9 * x3 * x3 + 2 * x1 * x1 + 6 * x3 * x3 == 891 ) //x0 = 1, x1= 2, x2= 6, x3= 7, x4= 2
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x3 * x3 + 6 * x0 * x1 + 9 * x1 * x2 + 5 * x0 * x3 + 5 * x3 * x3 == 743 ) //x0 = 1, x1= 2, x2= 6, x3= 7, x4= 2
		{
			printf("Solved the if at depth 2.\n");
			if ( 2 * x1 * x1 + 6 * x2 * x3 + 3 * x2 * x2 + 10 * x2 * x2 + 8 * x0 * x0 == 736 ) //x0 = 1, x1= 2, x2= 6, x3= 7, x4= 2
			{
				printf("Solved the if at depth 3.\n");
				if ( 9 * x3 * x3 + 9 * x0 * x2 + 4 * x0 * x0 + 8 * x3 * x3 + 4 * x2 * x2 == 1035 ) //x0 = 1, x1= 2, x2= 6, x3= 7, x4= 2
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}