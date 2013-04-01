#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 10 * x1 * x1 + 4 * x0 * x1 == 126 ) //x0 = 3, x1= 3
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x1 * x1 + 7 * x0 * x0 == 90 ) //x0 = 3, x1= 3
		{
			printf("Solved the if at depth 2.\n");
			if ( 5 * x0 * x0 + 7 * x1 * x1 == 108 ) //x0 = 3, x1= 3
			{
				printf("Solved the if at depth 3.\n");
				if ( 7 * x0 * x0 + 3 * x1 * x1 == 90 ) //x0 = 3, x1= 3
				{
					printf("Solved the if at depth 4.\n");
					if ( 10 * x0 * x0 + 6 * x0 * x0 == 144 ) //x0 = 3, x1= 3
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}