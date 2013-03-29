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
// x0 = -9
// x1 = 1
// x2 = -2
// x3 = -7
// x4 = 2
// x5 = 1
  if ((20 * x0 * x0 * x1) + (-1 * x1 * x3 * x5) + (-2 * x3 * x5 * x5) +
      (232 * x5 * x5) >= 1802)
    {
      printf ("I am here at depth 3");
      if ((-1 * x2 * x2 * x2) + (2 * x2 * x3 * x5) != 44)
	{
	  printf ("I am here at depth 2");
	  if ((2 * x1 * x1 * x4) + (-1 * x2 * x4 * x4) + (1 * x2 * x3) +
	      (-3 * x0 * x5) + (-18 * x1 * x5) > 28)
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
