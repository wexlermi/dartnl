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
// x1 = -10
// x2 = 5
// x3 = 0
// x4 = 1
  if ((-1 * x1 * x4) == 10)
    {
      printf ("I am here at depth 2");
      if ((-1 * x0 * x2) + (-2 * x2 * x2) + (-1 * x4 * x4) == -16)
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
