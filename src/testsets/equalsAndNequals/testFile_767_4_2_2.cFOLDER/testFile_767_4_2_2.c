#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 6
// x1 = -9
  if ((1 * x1 * x1) != 164)
    {
      printf ("I am here at depth 4");
      if ((-1 * x1) + (5 * 1) != 60)
	{
	  printf ("I am here at depth 3");
	  if ((12 * x0) + (-5 * 1) == 67)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x1) + (-1 * x1) == 63)
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
