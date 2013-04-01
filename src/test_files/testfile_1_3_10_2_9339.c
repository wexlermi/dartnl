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

	if ( 10 * x0 * x0 + 2 * x2 * x2 + 3 * x2 * x2 == 85 ) //x0 = 2, x1= 6, x2= 3
	{
		printf("Solved the if at depth 1.\n");
	}
}