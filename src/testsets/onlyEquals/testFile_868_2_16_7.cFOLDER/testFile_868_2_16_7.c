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
//Possible solution to enter:
// x0 = 10
// x1 = 9
// x2 = 2
// x3 = -6
// x4 = -6
// x5 = 6
// x6 = -6
// x7 = 4
// x8 = 3
// x9 = 4
// x10 = 2
// x11 = 6
// x12 = -6
// x13 = 2
// x14 = 8
// x15 = 5
  if ((-3 * x3 * x8 * x8 * x8 * x11 * x13 * x14) +
      (-1 * x6 * x6 * x7 * x11 * x12 * x15 * x15) +
      (14 * x1 * x10 * x10 * x12 * x14) == 152064)
    {
      printf ("I am here at depth 2");
      if ((-3 * x4 * x6 * x6 * x6 * x7 * x10 * x10) +
	  (-1 * x1 * x1 * x1 * x1 * x9 * x11 * x13) +
	  (-1 * x2 * x2 * x9 * x12 * x12 * x13 * x15) +
	  (2 * x3 * x7 * x7 * x12 * x14 * x14 * x15) +
	  (1 * x3 * x7 * x9 * x10 * x10 * x12) +
	  (1 * x2 * x6 * x6 * x7 * x12 * x14) +
	  (3 * x6 * x9 * x12 * x13 * x13 * x14) == -11952)
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
