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
// x0 = -3
// x1 = 8
// x2 = -6
// x3 = -9
// x4 = 10
// x5 = 1
// x6 = 7
// x7 = -8
// x8 = 5
// x9 = 10
// x10 = -5
  if ((4 * x3 * x5 * x5 * x7) + (2 * x1 * x6 * x6 * x8) +
      (1 * x8 * x8 * x8 * x8) + (-1 * x4 * x4 * x6 * x9) +
      (-17 * x5 * x5 * x7 * x9) + (-1 * x1 * x4 * x9 * x10) +
      (-2 * x2 * x6 * x10 * x10) > 5237)
    {
      printf ("I am here at depth 2");
      if ((-1 * x1 * x2 * x4 * x6) + (-2 * x5 * x6 * x6 * x7) +
	  (2 * x2 * x3 * x4 * x8) + (-3 * x1 * x3 * x8 * x9) +
	  (1 * x4 * x5 * x9 * x9) + (-2 * x0 * x2 * x4 * x10) +
	  (-3 * x7 * x7 * x8 * x10) + (-6 * x3 * x3 * x4) +
	  (8 * x3 * x5 * x5) < 23042)
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
