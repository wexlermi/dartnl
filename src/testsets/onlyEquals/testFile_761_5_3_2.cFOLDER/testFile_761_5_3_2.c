#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 9
// x1 = 8
// x2 = 9
  if ((1 * x1 * x1) + (-1 * x0 * x2) + (4 * x1 * x2) == 271)
    {
      printf ("I am here at depth 5");
      if ((2 * x1) == 16)
	{
	  printf ("I am here at depth 4");
	  if ((2 * x1 * x1) + (-3 * x2) == 101)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x1) + (-5 * x2) == -117)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x2 * x2) + (-2 * x0) + (5 * 1) == -94)
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
