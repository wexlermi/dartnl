#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -5
// x1 = -5
  if ((-1 * x0 * x0) + (1 * x1 * x1) == 0)
    {
      printf ("I am here at depth 4");
      if ((1 * x1) + (2 * 1) == -3)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x0 * x1) + (-10 * x1 * x1 * x1) + (-1 * x1 * x1) +
	      (3 * x1) == 1085)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x0 * x0) + (5 * x0 * x0 * x1) +
		  (-3 * x1 * x1 * x1) + (-4 * x1 * x1) + (-9 * x1) == -180)
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
  else
    {
      printf ("I am at the else of depth 4");
    }
}