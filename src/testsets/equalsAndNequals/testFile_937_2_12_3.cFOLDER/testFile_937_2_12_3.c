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
// x0 = -9
// x1 = -8
// x2 = -7
// x3 = -8
// x4 = 4
// x5 = -1
// x6 = -5
// x7 = -9
// x8 = 0
// x9 = 3
// x10 = -7
// x11 = 5
  if ((1 * x7 * x7 * x8) + (-21 * x4 * x8 * x9) + (-6 * x1 * x5 * x11) ==
      -240)
    {
      printf ("I am here at depth 2");
      if ((16 * x6 * x9) != -160)
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
