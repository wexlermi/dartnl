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
  int x14;
  int x15;
  int x16;
  int x17;
//Possible solution to enter:
// x0 = 9
// x1 = -8
// x2 = 4
// x3 = -3
// x4 = -3
// x5 = 0
// x6 = -7
// x7 = 3
// x8 = 4
// x9 = -1
// x10 = -10
// x11 = 1
// x12 = -8
// x13 = -10
// x14 = -6
// x15 = -10
// x16 = -5
// x17 = 5
  if ((-5 * x2 * x5 * x8 * x12 * x16 * x16) + (2 * x2 * x4 * x6 * x8 * x10) ==
      -6720)
    {
      printf ("I am here at depth 2");
      if ((-3 * x0 * x3 * x5 * x7 * x11 * x14) +
	  (2 * x4 * x4 * x8 * x11 * x14 * x16) +
	  (2 * x0 * x5 * x7 * x8 * x11) + (-1 * x2 * x2 * x3 * x3 * x15) +
	  (1 * x0 * x1 * x4 * x8 * x17) == 7920)
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
