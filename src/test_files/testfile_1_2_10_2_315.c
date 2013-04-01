#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 5 * x1 * x1 + 5 * x1 * x1 == 90 ) //x0 = 7, x1= 3
	{
		printf("Solved the if at depth 1.\n");
	}
}