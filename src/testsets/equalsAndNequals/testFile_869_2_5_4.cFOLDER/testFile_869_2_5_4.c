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
// x0 = 10
// x1 = 6
// x2 = -9
// x3 = -9
// x4 = 8
  if ((-3 * x0 * x0 * x2 * x3) + (-9 * x1 * x2 * x3 * x3) +
      (-7 * x4 * x4 * x4 * x4) + (-1 * x2 * x3 * x3) + (-1 * x1 * x1) +
      (1 * x4 * x4) != -12778)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x0 * x2 * x2) + (-7 * x2 * x3 * x3 * x3) +
	  (3 * x1 * x2 * x3 * x4) + (-1 * x3 * x4 * x4 * x4) +
	  (2 * x1 * x2 * x3) + (1 * x0 * x0 * x4) + (1 * x1 * x1 * x4) +
	  (51 * x2 * x2) + (3 * x2) == -15391)
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
