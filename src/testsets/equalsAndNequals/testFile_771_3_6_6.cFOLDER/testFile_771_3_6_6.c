#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
//Possible solution to enter:
// x0 = 0
// x1 = 3
// x2 = 3
// x3 = -2
// x4 = 3
// x5 = -10
  if ((-3 * x2 * x2 * x2 * x4 * x5) == 2430)
    {
      printf ("I am here at depth 3");
      if ((-2 * x1 * x1 * x1 * x1 * x1 * x3) +
	  (-2 * x1 * x1 * x1 * x2 * x2 * x3) +
	  (1 * x1 * x2 * x2 * x2 * x3 * x3) +
	  (-1 * x2 * x2 * x2 * x2 * x3 * x4) +
	  (-1 * x0 * x3 * x3 * x3 * x4 * x4) +
	  (-1 * x0 * x1 * x1 * x2 * x2 * x5) + (-1 * x1 * x1 * x2 * x3 * x3) +
	  (-1 * x1 * x4 * x4 * x4 * x5) + (1 * x1 * x1 * x2 * x5 * x5) +
	  (-2 * x1 * x2 * x2 * x2) + (-1 * x0 * x3 * x5) + (3 * x4 * x4) ==
	  6021)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x0 * x1 * x1 * x2 * x2 * x4) +
	      (1 * x0 * x0 * x0 * x2 * x4 * x4) +
	      (-3 * x0 * x0 * x0 * x0 * x2 * x5) +
	      (-1 * x1 * x1 * x1 * x4 * x4 * x5) +
	      (1 * x0 * x3 * x4 * x4 * x4 * x5) +
	      (-1 * x0 * x0 * x0 * x0 * x1) + (-3 * x0 * x1 * x3 * x3 * x4) ==
	      2430)
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
  else
    {
      printf ("I am at the else of depth 3");
    }
}
