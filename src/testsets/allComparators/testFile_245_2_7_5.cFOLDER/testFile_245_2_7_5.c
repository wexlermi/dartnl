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
//Possible solution to enter:
// x0 = -10
// x1 = 10
// x2 = -4
// x3 = -2
// x4 = 3
// x5 = -10
// x6 = 5
  if ((6 * x0 * x1 * x1 * x1 * x4) + (12 * x1 * x1 * x1 * x2 * x4) +
      (12 * x1 * x2 * x2 * x3 * x5) + (-5 * x0 * x1 * x3 * x3 * x5) +
      (-1 * x1 * x3 * x3 * x3 * x5) + (1 * x3 * x3 * x4 * x4 * x5) +
      (50 * x2 * x2 * x4 * x5 * x5) + (-2 * x0 * x1 * x1 * x1 * x6) +
      (-2 * x0 * x1 * x3 * x3 * x6) + (1 * x1 * x3 * x4 * x4 * x6) +
      (-1 * x2 * x2 * x3 * x6) + (-3 * x0 * x4 * x6) + (3 * x3) != 37014)
    {
      printf ("I am here at depth 2");
      if ((-2 * x0 * x0 * x4 * x6) < -2971)
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
