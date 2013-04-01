#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 7 * x0 * x0 == 252 ) //x0 = 6
	{
		printf("Solved the if at depth 1.\n");
	}
}