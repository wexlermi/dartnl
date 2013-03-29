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
// x0 = 6
// x1 = 9
// x2 = 8
// x3 = 9
// x4 = 10
// x5 = -4
// x6 = 1
  if ((3 * x0 * x0 * x2 * x2 * x2) + (-2 * x0 * x3 * x3 * x3 * x4) +
      (-2 * x2 * x2 * x4 * x4 * x4) + (22 * x0 * x1 * x2 * x4 * x6) +
      (2 * x0 * x1 * x5 * x5 * x6) + (2 * x4 * x5 * x5 * x6 * x6) +
      (7 * x0 * x1 * x2 * x6) + (13 * x0 * x3 * x5) + (6 * x1 * x4) == -62340)
    {
      printf ("I am here at depth 4");
      if ((-1 * x1 * x5 * x5 * x6 * x6) + (-4 * x1 * x1) == -468)
	{
	  printf ("I am here at depth 3");
	  if ((2 * x1 * x2 * x2 * x2 * x3) == 82944)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x1 * x1 * x2 * x2 * x5) +
		  (13 * x0 * x2 * x2 * x3 * x5) +
		  (-1 * x0 * x2 * x4 * x4 * x5) +
		  (1 * x1 * x4 * x5 * x5 * x6) + (-2 * x1 * x1 * x2 * x4) +
		  (-1 * x0 * x4 * x4) + (-5 * x4 * x5 * x6) + (-2 * x0) !=
		  -193239)
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
  else
    {
      printf ("I am at the else of depth 4");
    }
}
