#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 10
// x1 = -2
// x2 = -10
  if ((-3 * x0 * x0 * x1 * x2) + (14 * x0 * x1) <= -6277)
    {
      printf ("I am here at depth 3");
      if ((-1 * x1 * x1 * x1 * x1) + (1 * x0 * x1 * x1 * x2) +
	  (1 * x0 * x0 * x1) + (1 * 1) < -566)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x0 * x0 * x0) + (18 * x1 * x2) >= 1273)
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