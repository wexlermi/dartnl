#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 0
// x1 = -7
  if ((1 * x0 * x0) + (1 * x0 * x1) + (1 * x1 * x1) == 49)
    {
      printf ("I am here at depth 2");
      if ((-1 * x1 * x1) == -49)
	{
	  printf ("I am here at depth 1");

	}
      else
	{
	  printf ("I am at the else of depth 1");
	}
    }
  else
    {
      printf ("I am at the else of depth 2");
    }
}
