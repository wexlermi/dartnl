#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = -9
// x1 = 1
// x2 = 1
// x3 = -2
// x4 = -2
  if ((-4 * x0 * x3 * x3 * x4) + (-1 * x1 * x4) + (-18 * x2 * x4) == -250)
    {
      printf ("I am here at depth 3");
      if ((1 * x1 * x2 * x2 * x2) + (1 * x1 * x1 * x1 * x3) +
	  (1 * x0 * x1 * x3 * x3) + (1 * x1 * x1 * x1 * x4) +
	  (-1 * x3 * x3 * x3 * x4) + (-2 * x2 * x4 * x4 * x4) +
	  (-8 * x0 * x2 * x4) + (-16 * x1 * x1) == -199)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x0 * x4 * x4) == 36)
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
