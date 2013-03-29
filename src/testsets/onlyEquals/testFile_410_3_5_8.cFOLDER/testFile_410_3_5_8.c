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
// x1 = -3
// x2 = 10
// x3 = -7
// x4 = 6
  if ((3 * x0 * x0 * x0 * x0 * x1 * x1 * x4 * x4) +
      (6 * x0 * x0 * x1 * x1 * x1 * x2 * x4 * x4) +
      (18 * x1 * x1 * x1 * x1 * x1 * x3 * x4 * x4) +
      (1 * x1 * x1 * x1 * x2 * x3 * x4 * x4 * x4) +
      (5 * x0 * x0 * x0 * x0 * x0 * x2 * x2) +
      (-3 * x0 * x1 * x1 * x1 * x2 * x2 * x2) +
      (-8 * x0 * x2 * x3 * x3 * x3 * x3 * x4) +
      (-1 * x0 * x0 * x3 * x4 * x4 * x4) + (2 * x0 * x1 * x3 * x4 * x4 * x4) +
      (6 * x2 * x2 * x3 * x4 * x4 * x4) + (2 * x1 * x4 * x4 * x4 * x4 * x4) +
      (-3 * x0 * x0 * x2 * x2 * x4) + (-1 * x0 * x2 * x3 * x4) +
      (-3 * x2 * x2 * x2) + (-1 * x2 * x2 * x3) + (-6 * x3 * x4 * x4) ==
      -17780720)
    {
      printf ("I am here at depth 3");
      if ((-1 * x0 * x1 * x2 * x3 * x3 * x3 * x3 * x3) +
	  (68 * x0 * x3 * x3 * x3 * x3 * x3 * x4 * x4) +
	  (-1 * x0 * x0 * x0 * x0 * x1 * x1 * x3) +
	  (1 * x1 * x1 * x1 * x4 * x4 * x4 * x4) +
	  (-1 * x0 * x1 * x1 * x2 * x4 * x4) == 375237225)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x3) +
	      (3 * x1 * x1 * x1 * x1 * x1 * x2 * x2 * x3) +
	      (-1 * x0 * x0 * x2 * x2 * x3 * x3 * x4 * x4) +
	      (8 * x1 * x2 * x3 * x4 * x4 * x4 * x4 * x4) +
	      (1 * x0 * x0 * x1 * x1 * x1 * x2 * x2) +
	      (2 * x0 * x0 * x3 * x3 * x3 * x3 * x4) +
	      (3 * x2 * x2 * x4 * x4 * x4 * x4 * x4) +
	      (-2 * x0 * x0 * x4 * x4 * x4 * x4) + (1 * x1 * x1 * x1 * x4) +
	      (-1 * x0 * x1 * x2) + (-1 * x2 * x4 * x4) == 3538017)
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
