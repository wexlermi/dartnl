#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -6
// x1 = 5
// x2 = 5
// x3 = 8
  if ((-1 * x2 * x2) == -25)
    {
      printf ("I am here at depth 5");
      if ((16 * x0 * x3) + (-4 * x1) + (25 * x2) == -663)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x3 * x3) == 64)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x2) == 30)
		{
		  printf ("I am here at depth 2");
		  if ((2 * x0 * x1) == -60)
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