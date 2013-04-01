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

	if ( 10 * x1 * x2 + 9 * x2 * x2 + 5 * x1 * x1 == 409 ) //x0 = 3, x1= 8, x2= 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x1 * x1 + 6 * x1 * x1 + 3 * x0 * x2 == 1033 ) //x0 = 3, x1= 8, x2= 1
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}