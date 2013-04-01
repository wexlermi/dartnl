#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 6 * x1 * x1 + 8 * x1 * x1 == 1134 ) //x0 = 1, x1= 9
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x0 + 2 * x1 * x1 == 170 ) //x0 = 1, x1= 9
		{
			printf("Solved the if at depth 2.\n");
			if ( 6 * x1 * x1 + 9 * x0 * x0 == 495 ) //x0 = 1, x1= 9
			{
				printf("Solved the if at depth 3.\n");
				if ( 1 * x0 * x0 + 5 * x0 * x0 == 6 ) //x0 = 1, x1= 9
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}