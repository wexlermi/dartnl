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

	if ( 4 * x3 * x3 + 10 * x2 * x2 + 5 * x1 * x3 + 9 * x1 * x1 == 1066 ) //x0 = 8, x1= 3, x2= 9, x3= 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 6 * x0 * x0 + 2 * x0 * x3 + 7 * x2 * x2 + 6 * x1 * x3 == 1121 ) //x0 = 8, x1= 3, x2= 9, x3= 5
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}