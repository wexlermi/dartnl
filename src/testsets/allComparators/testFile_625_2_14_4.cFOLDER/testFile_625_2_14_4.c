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
// x1 = -9
// x2 = -7
// x3 = 6
// x4 = 8
// x5 = 8
// x6 = -8
// x7 = 8
// x8 = -10
// x9 = 2
// x10 = -7
// x11 = 0
// x12 = 5
// x13 = -6
  if ((3 * x0 * x3 * x9 * x9) >= 231)
    {
      printf ("I am here at depth 2");
      if ((-2 * x0 * x1 * x8 * x8) + (-1 * x9 * x10 * x13 * x13) +
	  (1 * x5 * x8 * x13) > 8157)
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
