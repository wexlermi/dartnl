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
// x0 = 10
// x1 = 4
// x2 = 6
// x3 = 8
// x4 = -8
// x5 = 5
// x6 = 1
  if ((1 * x2 * x3) + (14 * x5 * x6) + (1 * x5) < 167)
    {
      printf ("I am here at depth 2");
      if ((2 * x1 * x2) + (1 * x6) >= 1)
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
