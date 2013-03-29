#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 4
// x1 = -8
// x2 = 0
// x3 = 8
  if ((2 * x0 * x0 * x0 * x0 * x2) + (8 * x0 * x1 * x2 * x2 * x2) +
      (1 * x0 * x0 * x1 * x2 * x3) + (304 * x1 * x2 * x2 * x2 * x3) +
      (-4 * x0 * x0 * x0 * x3) + (-11 * x0 * x1 * x1) == -4864)
    {
      printf ("I am here at depth 2");
      if ((1 * x1 * x1 * x1 * x1 * x2) + (-9 * x1 * x1 * x1 * x2 * x3) +
	  (-2 * x0 * x2 * x2 * x3 * x3) != -58)
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
