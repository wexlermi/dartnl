#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = -7
// x1 = 7
// x2 = -4
// x3 = 2
// x4 = 7
  if ((2 * x0 * x0 * x1 * x1 * x1 * x1 * x2 * x2) +
      (2 * x0 * x0 * x0 * x0 * x0 * x0 * x1 * x3) +
      (2 * x1 * x2 * x2 * x2 * x2 * x2 * x2 * x4) +
      (7 * x0 * x0 * x0 * x0 * x3 * x3 * x3 * x4) +
      (48 * x0 * x0 * x1 * x1 * x1 * x1 * x2) +
      (1 * x1 * x1 * x2 * x2 * x2 * x3 * x3) +
      (8 * x1 * x1 * x3 * x3 * x3 * x3 * x4) + (-2 * x3 * x4 * x4 * x4) ==
      -14157080)
    {
      printf ("I am here at depth 2");
      if ((2 * x0 * x0 * x1 * x1 * x2 * x3 * x3 * x3) +
	  (-1 * x0 * x2 * x2 * x2 * x2 * x3 * x3 * x3) +
	  (-1 * x1 * x2 * x2 * x2 * x2 * x3 * x3 * x3) +
	  (10 * x0 * x0 * x1 * x1 * x3 * x3 * x3) +
	  (-1 * x0 * x1 * x3 * x4 * x4 * x4 * x4) +
	  (-4 * x0 * x0 * x1 * x1 * x1 * x3) +
	  (1 * x0 * x1 * x2 * x2 * x2 * x4) +
	  (1 * x0 * x1 * x1 * x3 * x4 * x4) == 127596)
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
