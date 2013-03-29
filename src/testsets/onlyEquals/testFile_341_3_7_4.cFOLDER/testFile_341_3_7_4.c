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
  int x6;
//Possible solution to enter:
// x0 = -8
// x1 = 5
// x2 = -5
// x3 = 6
// x4 = -1
// x5 = -5
// x6 = -7
  if ((-1 * x1 * x1 * x1 * x4) + (3 * x0 * x1 * x4 * x5) +
      (1 * x0 * x2 * x6 * x6) + (-1 * x0 * x3 * x6 * x6) +
      (-1 * x4 * x5 * x6 * x6) + (-1 * x0 * x4 * x6) + (2 * 1) == 3650)
    {
      printf ("I am here at depth 3");
      if ((-1 * x3 * x4 * x4 * x4) + (1 * x2 * x4 * x5 * x5) +
	  (-5 * x0 * x3 * x6 * x6) + (11 * x0 * x5 * x5) == 9691)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x2 * x2 * x4 * x6) + (1 * x4) == 174)
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
