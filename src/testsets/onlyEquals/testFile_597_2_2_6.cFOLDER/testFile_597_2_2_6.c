#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -3
// x1 = 8
  if ((2 * x0 * x0 * x0 * x0 * x0 * x1) + (-3 * x0 * x1 * x1 * x1 * x1 * x1) +
      (-11 * x0 * x0 * x1 * x1 * x1) + (4 * x0 * x0 * x0 * x0) +
      (73 * x0 * x0 * x0 * x1) + (30 * x0 * x0 * x1 * x1) +
      (-1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x0) + (22 * x0 * x0) ==
      238301)
    {
      printf ("I am here at depth 2");
      if ((-1 * x0 * x0 * x0 * x0 * x0 * x1) +
	  (3 * x0 * x0 * x0 * x0 * x1 * x1) +
	  (-1 * x0 * x0 * x0 * x1 * x1 * x1) +
	  (-2 * x0 * x1 * x1 * x1 * x1 * x1) +
	  (11 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0 * x0) +
	  (1 * x0 * x1 * x1 * x1 * x1) + (-2 * x0 * x0 * x0 * x0) +
	  (1 * x0 * x0 * x0 * x1) + (-3 * x0 * x0 * x1 * x1) +
	  (-1 * x0 * x1 * x1 * x1) + (1 * x0 * x0 * x0) + (3 * x0 * x0 * x1) +
	  (-37 * x0 * x1) + (4 * x1) + (1 * 1) == 3099521)
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
