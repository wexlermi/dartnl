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
// x0 = 2
// x1 = 0
// x2 = 9
// x3 = 10
// x4 = 6
// x5 = -8
// x6 = -3
// x7 = 2
  if ((-2 * x0 * x1 * x6) == 0)
    {
      printf ("I am here at depth 2");
      if ((-1 * x0 * x0 * x5) + (2 * x2 * x5 * x5) == 1184)
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
