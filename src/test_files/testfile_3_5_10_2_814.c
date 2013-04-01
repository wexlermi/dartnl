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

	if ( 3 * x0 * x2 + 3 * x0 * x0 + 2 * x0 * x0 + 9 * x2 * x2 + 4 * x3 * x3 == 219 ) //x0 = 2, x1= 8, x2= 3, x3= 5, x4= 10
	{
		printf("Solved the if at depth 1.\n");
		if ( 9 * x0 * x0 + 9 * x4 * x4 + 4 * x2 * x3 + 3 * x0 * x0 + 7 * x0 * x0 == 1036 ) //x0 = 2, x1= 8, x2= 3, x3= 5, x4= 10
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x2 * x2 + 2 * x1 * x1 + 10 * x0 * x4 + 1 * x0 * x4 + 6 * x0 * x0 == 444 ) //x0 = 2, x1= 8, x2= 3, x3= 5, x4= 10
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}