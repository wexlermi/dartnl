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
// x0 = 1
// x1 = -7
// x2 = -3
// x3 = -7
// x4 = -5
// x5 = 0
// x6 = 10
  if ((1 * x2 * x3 * x3) + (1 * x0 * x4 * x5) + (-2 * x1 * x1 * x6) +
      (1 * x3 * x3) == -1078)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x0 * x1) + (-1 * x4 * x5 * x6) != -57)
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