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
  int x12;
  int x13;
//Possible solution to enter:
// x0 = 4
// x1 = 9
// x2 = -6
// x3 = 9
// x4 = 10
// x5 = -9
// x6 = 3
// x7 = 2
// x8 = 10
// x9 = -2
// x10 = 3
// x11 = 4
// x12 = -9
// x13 = -4
  if ((-1 * x3 * x4 * x5) + (1 * x0 * x1 * x8) + (-1 * x7 * x7 * x9) +
      (23 * x3 * x9 * x12) + (-8 * x1 * x11) == 4616)
    {
      printf ("I am here at depth 3");
      if ((-2 * x2 * x8 * x9) + (-9 * x4 * x10 * x11) +
	  (-2 * x2 * x12 * x12) + (-1 * x4 * x4 * x13) <= 102)
	{
	  printf ("I am here at depth 2");
	  if ((-2 * x6 * x7 * x7) <= -9)
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