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
  int x9;
  int x10;
//Possible solution to enter:
// x0 = 8
// x1 = -4
// x2 = 6
// x3 = -6
// x4 = 9
// x5 = 10
// x6 = 10
// x7 = -10
// x8 = -8
// x9 = 4
// x10 = 0
  if ((2 * x3 * x4 * x4 * x9 * x9 * x10) + (-1 * x0 * x4 * x4 * x6 * x7) +
      (-1 * x2 * x7 * x10 * x10) == 64800)
    {
      printf ("I am here at depth 3");
      if ((-4 * x0 * x2 * x5 * x5 * x6 * x6) +
	  (-2 * x3 * x3 * x5 * x7 * x9 * x9) + (1 * x3 * x8 * x8 * x8 * x9) +
	  (2 * x5 * x6 * x6 * x9 * x9) == -1760512)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x1 * x2 * x3 * x4 * x4 * x4) +
	      (-5 * x0 * x2 * x3 * x5 * x5 * x5) +
	      (-9 * x3 * x5 * x5 * x5 * x6 * x7) +
	      (3 * x0 * x0 * x0 * x2 * x6 * x8) +
	      (-1 * x2 * x3 * x6 * x6 * x8 * x8) +
	      (1 * x0 * x3 * x7 * x9 * x9 * x9) +
	      (-2 * x0 * x2 * x2 * x5 * x6 * x10) +
	      (1 * x1 * x5 * x6 * x7 * x8 * x10) +
	      (2 * x1 * x1 * x4 * x7 * x9 * x10) +
	      (17 * x0 * x5 * x6 * x7 * x7) + (-4 * x0 * x3 * x5 * x5 * x8) +
	      (-1 * x6 * x9 * x9 * x9) == -3335376)
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
