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
  int x11;
//Possible solution to enter:
// x0 = 6
// x1 = -5
// x2 = 7
// x3 = 2
// x4 = -10
// x5 = 3
// x6 = 0
// x7 = 6
// x8 = 7
// x9 = -6
// x10 = -5
// x11 = 2
  if ((7 * x5 * x6 * x6 * x7 * x8) + (-4 * x4 * x6 * x7 * x7 * x9) +
      (-1 * x9 * x9 * x10 * x10 * x10) + (1 * x3 * x5 * x5 * x8 * x11) +
      (1 * x0 * x3 * x6 * x9) + (1 * x1 * x3 * x11) + (1 * x3 * x8 * x11) !=
      4851)
    {
      printf ("I am here at depth 3");
      if ((-5 * x2 * x6 * x6 * x6 * x8) + (-2 * x2 * x5 * x5 * x10 * x10) ==
	  -3150)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x1 * x4 * x4 * x4 * x9) + (7 * x2 * x2 * x6 * x6) +
	      (2 * x3 * x7 * x7 * x7) != -29144)
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
