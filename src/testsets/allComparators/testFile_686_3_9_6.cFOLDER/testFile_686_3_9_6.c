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
// x0 = -1
// x1 = 0
// x2 = 7
// x3 = -2
// x4 = 3
// x5 = 6
// x6 = -8
// x7 = 6
// x8 = 1
  if ((1 * x2 * x3 * x4 * x4 * x5 * x6) + (2 * x0 * x0 * x3 * x3 * x6 * x6) +
      (-1 * x0 * x1 * x3 * x5 * x7 * x7) + (1 * x1 * x1 * x1 * x6 * x7 * x7) +
      (1 * x0 * x4 * x5 * x6 * x6 * x8) + (-1 * x2 * x2 * x6 * x6 * x6 * x8) +
      (1 * x0 * x4 * x4 * x7 * x8) == 30442)
    {
      printf ("I am here at depth 3");
      if ((-2 * x1 * x3 * x3 * x4 * x6 * x8) == 0)
	{
	  printf ("I am here at depth 2");
	  if ((-2 * x0 * x1 * x1 * x1 * x3 * x3) +
	      (1 * x0 * x2 * x2 * x2 * x2 * x4) +
	      (-86 * x1 * x1 * x3 * x3 * x5 * x5) +
	      (-1 * x1 * x2 * x2 * x2 * x4 * x7) +
	      (-1 * x2 * x6 * x7 * x7 * x7 * x8) +
	      (-2 * x2 * x4 * x5 * x5 * x8 * x8) +
	      (-5 * x5 * x5 * x6 * x6 * x8 * x8) +
	      (-4 * x0 * x3 * x5 * x6 * x6) + (3 * x2 * x2 * x3 * x6 * x7) +
	      (1 * x0 * x2 * x2 * x3) + (-1 * x0 * x1 * x2 * x4) +
	      (-9 * x1 * x4 * x5 * x6) != 3020)
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