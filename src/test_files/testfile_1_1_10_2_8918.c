#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 6 * x0 * x0 == 54 ) //x0 = 3
	{
		printf("Solved the if at depth 1.\n");
	}
}