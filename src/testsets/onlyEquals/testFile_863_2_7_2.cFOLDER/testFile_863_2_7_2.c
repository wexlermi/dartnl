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
// x0 = -5
// x1 = -6
// x2 = 7
// x3 = -10
// x4 = 7
// x5 = -4
// x6 = -10
  if ((-1 * x2 * x4) + (1 * x3) == -59)
    {
      printf ("I am here at depth 2");
      if ((-1 * x1 * x6) == -60)
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
