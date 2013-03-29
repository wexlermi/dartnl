#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -5
// x1 = 1
// x2 = 2
  if ((-6 * x0 * x0 * x0 * x2 * x2 * x2) + (5 * x0 * x0 * x1 * x1 * x1) +
      (-1 * x0 * x0 * x0 * x1 * x2) + (6 * x0 * x1 * x1 * x2 * x2) +
      (1 * x0 * x0 * x0 * x1) + (-55 * x0 * x1 * x1 * x1) +
      (1 * x0 * x0 * x0 * x2) + (4 * x1) == 6159)
    {
      printf ("I am here at depth 3");
      if ((-2 * x0 * x0 * x1 * x1 * x2 * x2) + (-2 * x1 * x1 * x2 * x2 * x2) +
	  (-6 * x0 * x2 * x2 * x2 * x2) + (3 * x0 * x0 * x2 * x2) +
	  (1 * x0 * x1 * x1) + (-2 * x2 * x2 * x2) == 543)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x0 * x1 * x1 * x1 * x1) + (-1 * x2 * x2 * x2 * x2 * x2) +
	      (4 * x0 * x0 * x0 * x0) + (-5 * x1) == 2458)
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
