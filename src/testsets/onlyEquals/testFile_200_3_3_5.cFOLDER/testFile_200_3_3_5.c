#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -7
// x1 = -10
// x2 = -10
  if ((-2 * x1 * x1 * x1 * x2 * x2) + (2 * x0 * x0 * x0 * x2) == 206860)
    {
      printf ("I am here at depth 3");
      if ((-1 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x0 * x1 * x2) +
	  (1 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x0) +
	  (-1 * x0 * x1 * x1) + (-7 * 1) == 142336)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x0 * x0 * x1 * x1 * x1) + (-2 * x1 * x1 * x1 * x1 * x1) +
	      (1 * x0 * x0 * x0 * x2 * x2) + (1 * x1 * x1 * x1 * x2 * x2) +
	      (-1 * x0 * x1 * x2 * x2 * x2) + (-1 * x2 * x2 * x2 * x2 * x2) +
	      (1 * x0 * x0 * x0 * x2) + (2 * x1 * x2 * x2 * x2) +
	      (-6 * x2 * x2 * x2 * x2) + (-1 * x0 * x0 * x1) +
	      (-157 * x0 * x1 * x1) + (-2 * x1 * x1 * x2) + (-1 * x1 * x1) ==
	      360420)
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
