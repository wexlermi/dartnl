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

	if ( 9 * x3 * x3 + 3 * x4 * x4 + 7 * x0 * x4 + 6 * x1 * x1 + 1 * x3 * x4 == 242 ) //x0 = 1, x1= 1, x2= 4, x3= 4, x4= 4
	{
		printf("Solved the if at depth 1.\n");
		if ( 6 * x1 * x1 + 5 * x1 * x1 + 5 * x0 * x0 + 8 * x0 * x2 + 6 * x1 * x1 == 54 ) //x0 = 1, x1= 1, x2= 4, x3= 4, x4= 4
		{
			printf("Solved the if at depth 2.\n");
			if ( 5 * x2 * x3 + 10 * x2 * x2 + 1 * x3 * x4 + 4 * x1 * x2 + 9 * x1 * x4 == 308 ) //x0 = 1, x1= 1, x2= 4, x3= 4, x4= 4
			{
				printf("Solved the if at depth 3.\n");
				if ( 6 * x0 * x2 + 9 * x3 * x4 + 9 * x1 * x3 + 5 * x2 * x2 + 10 * x4 * x4 == 444 ) //x0 = 1, x1= 1, x2= 4, x3= 4, x4= 4
				{
					printf("Solved the if at depth 4.\n");
					if ( 1 * x0 * x4 + 8 * x4 * x4 + 6 * x1 * x4 + 4 * x0 * x1 + 4 * x4 * x4 == 224 ) //x0 = 1, x1= 1, x2= 4, x3= 4, x4= 4
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}