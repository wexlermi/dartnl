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

	if ( 3 * x0 * x0 + 6 * x0 * x2 + 6 * x0 * x0 == 60 ) //x0 = 2, x1= 9, x2= 2
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x0 * x0 + 10 * x2 * x2 + 4 * x0 * x1 == 152 ) //x0 = 2, x1= 9, x2= 2
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}