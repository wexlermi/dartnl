#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 3
// x1 = 7
// x2 = 9
// x3 = 8
  if ((-1 * x0 * x0 * x0 * x3) + (-4 * x1 * x3 * x3 * x3) +
      (-5 * x1 * x1 * x2) + (-1 * x1 * x2 * x3) + (1 * x1 * x3 * x3) ==
      -16813)
    {
      printf ("I am here at depth 3");
      if ((-1 * x1 * x1 * x1 * x1) + (-2 * x2 * x2 * x2 * x2) +
	  (3 * x0 * x2 * x3) + (-4 * x1 * x3 * x3) + (3 * x3 * x3 * x3) +
	  (-3 * x1) == -15152)
	{
	  printf ("I am here at depth 2");
	  if ((2 * x0 * x1 * x1 * x1) + (1 * x2 * x2 * x2 * x3) +
	      (3 * x0 * x0 * x2) + (-1 * x0 * x2 * x2) + (3 * x0 * x1 * x3) +
	      (-8926 * x2 * x2 * x3) + (-1 * x1 * x2) == -5775717)
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
