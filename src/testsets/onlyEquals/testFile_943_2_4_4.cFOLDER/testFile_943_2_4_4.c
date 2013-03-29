#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -2
// x1 = -5
// x2 = -8
// x3 = -9
  if ((13 * x0 * x0 * x0 * x1) + (-11 * x0 * x2 * x3 * x3) == -13736)
    {
      printf ("I am here at depth 2");
      if ((-7 * x0 * x3 * x3 * x3) + (-1 * x2 * x3 * x3 * x3) == -16038)
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
