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

	if ( 5 * x2 * x2 + 1 * x2 * x2 + 7 * x0 * x1 == 402 ) //x0 = 6, x1= 6, x2= 5
	{
		printf("Solved the if at depth 1.\n");
	}
}