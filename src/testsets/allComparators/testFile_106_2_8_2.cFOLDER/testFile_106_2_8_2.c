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
// x0 = 10
// x1 = -10
// x2 = 4
// x3 = -5
// x4 = 7
// x5 = 1
// x6 = -7
// x7 = -4
  if ((-4 * x2 * x6) < 192)
    {
      printf ("I am here at depth 2");
      if ((-7 * x0 * x2) + (1 * x6 * x6) <= -211)
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
