#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -3
// x1 = -9
// x2 = -9
// x3 = -3
  if ((-1 * x0 * x2 * x2) + (1 * x2 * x3 * x3) + (-2 * x1 * x3) + (-1 * x1) ==
      117)
    {
      printf ("I am here at depth 3");
      if ((4 * x2 * x2 * x3) + (-2 * x1 * x1) != -1220)
	{
	  printf ("I am here at depth 2");
	  if ((-9 * x0 * x1 * x1) + (-1 * x1 * x1 * x2) + (4 * x0 * x0) !=
	      3003)
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
  else
    {
      printf ("I am at the else of depth 3");
    }
}