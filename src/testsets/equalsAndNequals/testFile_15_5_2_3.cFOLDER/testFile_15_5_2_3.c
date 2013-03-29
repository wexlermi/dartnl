#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -2
// x1 = 9
  if ((-1 * x1 * x1 * x1) != -803)
    {
      printf ("I am here at depth 5");
      if ((2 * x0 * x0 * x1) + (-2 * x1 * x1 * x1) + (1 * x1 * x1) == -1305)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x0 * x0) + (-1 * x1 * x1 * x1) + (-12 * x0 * x1) +
	      (2 * x0) + (1 * 1) == -524)
	    {
	      printf ("I am here at depth 3");
	      if ((-2 * x1 * x1) + (-1 * x0) + (-3 * x1) != -89)
		{
		  printf ("I am here at depth 2");
		  if ((-2 * x1 * x1) != -152)
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
  else
    {
      printf ("I am at the else of depth 5");
    }
}
