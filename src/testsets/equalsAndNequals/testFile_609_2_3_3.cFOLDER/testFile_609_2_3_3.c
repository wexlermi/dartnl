#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 6
// x1 = 1
// x2 = 8
  if ((-2 * x0 * x1 * x1) + (6 * x1 * x1 * x1) + (1 * x2 * x2 * x2) +
      (1 * x1) == 507)
    {
      printf ("I am here at depth 2");
      if ((3 * x0 * x0) + (-1 * x0 * x2) + (1 * x1 * x2) + (5 * x1) != 37)
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