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
// x0 = -8
// x1 = 8
// x2 = -3
// x3 = 3
// x4 = -5
// x5 = 2
// x6 = -3
// x7 = 9
  if ((3 * x0 * x3 * x3 * x5 * x5) + (-2 * x0 * x2 * x5 * x5 * x6) +
      (-1 * x1 * x1 * x1 * x6 * x6) + (-12 * x1 * x1 * x2 * x3 * x7) +
      (-1 * x0 * x3 * x5 * x6 * x7) + (-9 * x0 * x0 * x0 * x1) +
      (1 * x3 * x3 * x4 * x6) + (-2 * x0 * x2 * x5 * x6) +
      (-3 * x3 * x6 * x6 * x7) + (2 * x4 * x4 * x6) + (3 * x1 * x2 * x7) !=
      91708)
    {
      printf ("I am here at depth 2");
      if ((4 * x0 * x0 * x0 * x0 * x1) + (-2 * x0 * x0 * x2 * x3 * x5) +
	  (9 * x1 * x4 * x4 * x4) + (-1 * x1 * x1 * x4 * x5) != 124937)
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
