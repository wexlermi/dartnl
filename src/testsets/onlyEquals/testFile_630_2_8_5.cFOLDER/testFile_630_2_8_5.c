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
//Possible solution to enter:
// x0 = -3
// x1 = -8
// x2 = 8
// x3 = -1
// x4 = -6
// x5 = 2
// x6 = 1
// x7 = -10
  if ((1 * x1 * x2 * x3 * x5 * x6) + (6 * x1 * x2 * x4 * x5 * x6) +
      (1 * x5 * x5 * x5 * x5 * x7) + (1 * x5 * x5 * x5 * x6 * x7) +
      (1 * x2 * x2 * x3 * x7 * x7) + (-6 * x3 * x4 * x6 * x7) +
      (-8 * x1 * x5 * x7 * x7) == 11256)
    {
      printf ("I am here at depth 2");
      if ((-1 * x1 * x1 * x1 * x2 * x3) + (-1 * x2 * x3 * x3 * x3 * x3) +
	  (-3 * x0 * x1 * x2 * x4 * x6) + (-18 * x2 * x2 * x2 * x5 * x7) ==
	  183672)
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