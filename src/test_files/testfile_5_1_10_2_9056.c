#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 10 * x0 * x0 == 810 ) //x0 = 9
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x0 == 648 ) //x0 = 9
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x0 * x0 == 648 ) //x0 = 9
			{
				printf("Solved the if at depth 3.\n");
				if ( 6 * x0 * x0 == 486 ) //x0 = 9
				{
					printf("Solved the if at depth 4.\n");
					if ( 3 * x0 * x0 == 243 ) //x0 = 9
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}