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
//Possible solution to enter:
// x0 = 10
// x1 = 2
// x2 = -3
// x3 = -1
// x4 = -6
// x5 = -10
// x6 = 0
// x7 = -9
// x8 = 4
  if ((-3 * x4 * x4 * x6) + (-1 * x3 * x5 * x6) + (1 * x1 * x6 * x7) +
      (-2 * x1 * x4 * x8) + (3 * x0 * x5 * x8) == -1104)
    {
      printf ("I am here at depth 2");
      if ((-1 * x1 * x4 * x5) + (-97 * x3 * x4) + (2 * x2 * x7) == -648)
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
