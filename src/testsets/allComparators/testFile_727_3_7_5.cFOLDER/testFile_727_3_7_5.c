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
// x0 = -1
// x1 = 6
// x2 = 9
// x3 = 2
// x4 = 9
// x5 = 3
// x6 = -2
  if ((2 * x3 * x3 * x3 * x4 * x5) + (-1 * x0 * x0 * x0 * x5 * x5) +
      (1 * x1 * x1 * x1 * x3) + (-3 * x0 * x0 * x4 * x4) == 630)
    {
      printf ("I am here at depth 3");
      if ((-1 * x0 * x1 * x2 * x4 * x4) + (-2 * x0 * x3 * x4 * x4 * x4) +
	  (-1 * x1 * x2 * x3 * x3 * x5) + (-2 * x1 * x1 * x2 * x4 * x5) +
	  (-6 * x1 * x2 * x3 * x4 * x6) + (9 * x2 * x2 * x2 * x3) +
	  (-3 * x0 * x0 * x3 * x5) + (-1 * x0 * x0 * x2 * x6) +
	  (1 * x1 * x2 * x5) + (-33 * x0 * x0) > 14035)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x1 * x2 * x2 * x3 * x3) + (1 * x0 * x0 * x0 * x4 * x5) +
	      (-2 * x1 * x1 * x2 * x4 * x6) + (14 * x1 * x1 * x2 * x5 * x6) +
	      (-2 * x0 * x2 * x4) <= -13424)
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