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
  int x7;
  int x8;
//Possible solution to enter:
// x0 = -8
// x1 = -1
// x2 = 5
// x3 = 7
// x4 = 5
// x5 = -8
// x6 = -4
// x7 = -2
// x8 = 1
  if ((-2 * x0 * x0 * x2 * x4 * x6 * x6 * x6) == 204800)
    {
      printf ("I am here at depth 3");
      if ((-2 * x1 * x1 * x1 * x3 * x3 * x5 * x6) +
	  (-3 * x0 * x4 * x5 * x5 * x5 * x6 * x6) +
	  (1 * x1 * x2 * x2 * x3 * x4 * x7 * x7) +
	  (1 * x2 * x3 * x5 * x6 * x6 * x7 * x7) +
	  (5 * x2 * x2 * x5 * x5 * x7 * x7) + (-1 * x0 * x4 * x5 * x5 * x7) +
	  (6 * x1 * x3 * x3 * x7 * x8) + (-1 * x0 * x0 * x4 * x8) +
	  (-9 * x1 * x4 * x6 * x8) == -974356)
	{
	  printf ("I am here at depth 2");
	  if ((3 * x6 * x6 * x6 * x6 * x6 * x6) == 12288)
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
