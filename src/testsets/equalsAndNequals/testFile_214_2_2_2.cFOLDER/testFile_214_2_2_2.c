#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 0
// x1 = 4
  if ((-4 * x1 * x1) + (-1 * x1) != -134)
    {
      printf ("I am here at depth 2");
      if ((-2 * x0 * x0) + (-9 * x1 * x1) + (-1 * x1) != -169)
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