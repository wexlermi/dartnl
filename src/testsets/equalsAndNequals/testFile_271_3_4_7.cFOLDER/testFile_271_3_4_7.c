#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -7
// x1 = -7
// x2 = -5
// x3 = -7
  if ((-1 * x0 * x0 * x0 * x2 * x2 * x2 * x2) +
      (1 * x0 * x0 * x1 * x1 * x1 * x1 * x3) +
      (1 * x1 * x1 * x1 * x3 * x3 * x3 * x3) +
      (-2 * x0 * x0 * x0 * x0 * x0 * x1) +
      (-7 * x0 * x1 * x1 * x1 * x1 * x3) + (2 * x0 * x2 * x2 * x3 * x3 * x3) +
      (-1 * x0 * x1 * x1 * x2) + (2 * x0 * x1 * x1 * x3) +
      (1 * x0 * x0 * x2 * x3) == -2366700)
    {
      printf ("I am here at depth 3");
      if ((-8 * x2 * x2 * x2 * x2 * x2 * x3) +
	  (1 * x0 * x2 * x2 * x3 * x3 * x3) != -115075)
	{
	  printf ("I am here at depth 2");
	  if ((2 * x0 * x1 * x1 * x1 * x1 * x2 * x2) +
	      (-3 * x0 * x1 * x1 * x1 * x1 * x1 * x3) +
	      (1 * x1 * x1 * x1 * x1 * x1 * x1 * x3) +
	      (1 * x1 * x1 * x1 * x1 * x1 * x2 * x3) +
	      (-4 * x0 * x2 * x2 * x2 * x2 * x3 * x3) +
	      (-1 * x0 * x0 * x2 * x2 * x3 * x3 * x3) +
	      (-2 * x1 * x3 * x3 * x3 * x3 * x3 * x3) +
	      (8 * x0 * x0 * x0 * x0 * x1 * x2) +
	      (-39 * x0 * x0 * x1 * x1 * x1 * x3) +
	      (-2 * x0 * x0 * x2 * x2 * x2 * x3) +
	      (-1 * x0 * x2 * x2 * x3 * x3) + (-1 * x1 * x1 * x1 * x3) +
	      (-1 * x1 * x1 * x2 * x3) + (2 * x2 * x2 * x2 * x3) +
	      (-1 * x2 * x2 * x2) + (1 * x0) != -852255)
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
