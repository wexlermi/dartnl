#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -10
// x1 = -9
// x2 = 3
  if ((2 * x0 * x0 * x1 * x1) + (-111 * x0 * x1 * x2 * x2) +
      (-1 * x0 * x2 * x2 * x2) + (1 * x0 * x0 * x2) + (-2 * x1 * x2 * x2) +
      (-1 * 1) != -72880)
    {
      printf ("I am here at depth 2");
      if ((-3 * x0 * x0 * x2) != -946)
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
