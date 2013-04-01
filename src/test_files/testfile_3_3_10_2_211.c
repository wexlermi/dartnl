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

	if ( 1 * x2 * x2 + 9 * x0 * x0 + 9 * x1 * x1 == 1233 ) //x0 = 8, x1= 8, x2= 9
	{
		printf("Solved the if at depth 1.\n");
		if ( 6 * x2 * x2 + 4 * x1 * x1 + 8 * x1 * x1 == 1254 ) //x0 = 8, x1= 8, x2= 9
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x0 * x0 + 9 * x2 * x2 + 5 * x1 * x1 == 1241 ) //x0 = 8, x1= 8, x2= 9
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}