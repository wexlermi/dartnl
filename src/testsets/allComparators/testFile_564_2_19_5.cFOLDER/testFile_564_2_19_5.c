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
  int x18;
//Possible solution to enter:
// x0 = -2
// x1 = 5
// x2 = 3
// x3 = 9
// x4 = -3
// x5 = -4
// x6 = -10
// x7 = -4
// x8 = -2
// x9 = 4
// x10 = -5
// x11 = 5
// x12 = -7
// x13 = 4
// x14 = -2
// x15 = -4
// x16 = 3
// x17 = -10
// x18 = 9
  if ((-1 * x0 * x0 * x9 * x9 * x11) + (-5 * x2 * x10 * x10 * x10 * x17) +
      (-1 * x1 * x11 * x12 * x16 * x17) + (5 * x2 * x4 * x13 * x15 * x18) +
      (1 * x1 * x7 * x15 * x16) + (-1 * x4 * x12 * x13 * x17) <= -16743)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x1 * x1 * x2 * x5) + (-1 * x0 * x7 * x12 * x12 * x14) +
	  (1 * x7 * x7 * x7 * x8 * x16) + (5 * x1 * x2 * x6 * x12 * x18) +
	  (2 * x2 * x2 * x7 * x14) != 49172)
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
