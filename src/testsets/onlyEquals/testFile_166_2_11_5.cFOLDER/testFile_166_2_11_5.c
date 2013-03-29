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
// x0 = 2
// x1 = -7
// x2 = -9
// x3 = 0
// x4 = 0
// x5 = 3
// x6 = -5
// x7 = 6
// x8 = 8
// x9 = 4
// x10 = 8
  if ((1 * x0 * x0 * x4 * x9) + (2 * x0 * x4 * x5 * x10) == 0)
    {
      printf ("I am here at depth 2");
      if ((-1 * x1 * x1 * x3 * x3 * x4) + (-3 * x0 * x4 * x5 * x5 * x7) +
	  (1 * x0 * x1 * x7 * x8 * x8) + (-2 * x0 * x6 * x7 * x8 * x10) +
	  (-24 * x2 * x2 * x3 * x10) == 2304)
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
