#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 0
// x1 = 4
// x2 = -5
  if ((-2 * x0 * x1) + (-5 * x1 * x1) == -80)
    {
      printf ("I am here at depth 3");
      if ((1 * x1 * x2) + (-1 * 1) == -21)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x1 * x1) + (-4 * x0 * x2) + (1 * x2 * x2) != 68)
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