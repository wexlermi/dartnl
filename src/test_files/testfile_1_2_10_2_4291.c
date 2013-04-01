#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 1 * x0 * x1 + 5 * x0 * x0 == 92 ) //x0 = 4, x1= 3
	{
		printf("Solved the if at depth 1.\n");
	}
}