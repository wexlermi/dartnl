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
// x0 = -9
// x1 = -2
// x2 = 9
// x3 = -5
// x4 = -5
// x5 = 5
// x6 = 10
  if ((-2 * x1 * x2 * x3 * x4) + (1 * x0 * x0 * x1 * x5) +
      (2 * x1 * x2 * x3 * x5) + (1 * x3 * x4 * x4 * x5) +
      (-1 * x0 * x4 * x6 * x6) + (-34 * x1 * x1 * x3) + (4 * x0 * x4 * x4) +
      (-1 * x3 * x6) == -4305)
    {
      printf ("I am here at depth 2");
      if ((-1 * x0 * x0 * x0) == 729)
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