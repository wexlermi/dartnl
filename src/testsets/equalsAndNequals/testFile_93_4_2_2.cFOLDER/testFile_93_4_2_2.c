#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 0
// x1 = 1
  if ((-3 * x0 * x0) + (-54 * x1 * x1) == -54)
    {
      printf ("I am here at depth 4");
      if ((4 * x0 * x1) + (-1 * x1) == -1)
	{
	  printf ("I am here at depth 3");
	  if ((-30 * 1) == -30)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0) == 0)
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
