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
// x0 = -8
// x1 = 8
// x2 = 0
// x3 = 4
// x4 = 3
// x5 = -10
// x6 = 1
// x7 = 9
// x8 = 1
// x9 = 8
// x10 = 8
// x11 = -9
  if ((-1 * x1 * x5 * x7) + (-7 * x0 * x6 * x7) + (-4 * x6 * x9 * x9) +
      (2 * x3 * x11) == 896)
    {
      printf ("I am here at depth 3");
      if ((-1 * x6 * x6 * x11) == 9)
	{
	  printf ("I am here at depth 2");
	  if ((3 * x1 * x4 * x6) + (2 * x2 * x5 * x6) + (-1 * x0 * x0 * x7) +
	      (30 * x7 * x7 * x11) == -22374)
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
