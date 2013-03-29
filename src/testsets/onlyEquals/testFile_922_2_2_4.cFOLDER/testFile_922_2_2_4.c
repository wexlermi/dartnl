#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -3
// x1 = -9
  if ((1 * x0 * x0 * x0 * x0) + (4 * x1 * x1 * x1 * x1) +
      (-1 * x0 * x0 * x0) + (1 * x0 * x0 * x1) + (-5 * x1 * x1 * x1) +
      (7 * x0 * x0) == 29979)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x0 * x1) +
	  (-9 * x1 * x1 * x1 * x1) + (1 * x0 * x1 * x1) + (2 * x0 * x1) +
	  (-1 * x1 * x1) + (1 * x0) == -59484)
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
