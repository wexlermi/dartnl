#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 5
// x1 = -2
// x2 = -7
  if ((-50 * x0 * x0 * x1 * x2 * x2) + (-4 * x1 * x2 * x2 * x2 * x2) +
      (-1 * x0 * x1 * x1 * x2) != 141784)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x0 * x1 * x1) == 100)
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