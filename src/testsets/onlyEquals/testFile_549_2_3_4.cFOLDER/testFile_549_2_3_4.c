#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -6
// x1 = -3
// x2 = 4
  if ((24 * x1 * x1 * x1 * x1) + (-1 * x1 * x2) + (10 * x0) == 1896)
    {
      printf ("I am here at depth 2");
      if ((-1 * x0 * x0 * x1 * x2) + (2 * x0 * x1 * x1 * x2) +
	  (1 * x2 * x2 * x2 * x2) + (-57 * x0 * x2 * x2) + (-10 * x2) == 5688)
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
