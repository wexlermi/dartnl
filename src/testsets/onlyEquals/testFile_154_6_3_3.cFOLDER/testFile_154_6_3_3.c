#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -9
// x1 = 1
// x2 = -4
  if ((1 * x0 * x2 * x2) == -144)
    {
      printf ("I am here at depth 6");
      if ((2 * x1 * x1 * x1) + (-22 * x2 * x2 * x2) + (-1 * x0 * x1) +
	  (1 * x2) == 1415)
	{
	  printf ("I am here at depth 5");
	  if ((-5 * x1 * x1 * x1) + (-1 * x0 * x2 * x2) + (-2 * x1 * x1) +
	      (-5 * x1 * x2) == 157)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x0 * x0 * x2) + (-25 * x0 * x0) + (1 * x1 * x2) +
		  (-1 * 1) == -2354)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x2 * x2 * x2) + (2 * x0 * x1) + (-2 * x1 * x1) ==
		      -84)
		    {
		      printf ("I am here at depth 2");
		      if ((16 * x0) == -144)
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
  else
    {
      printf ("I am at the else of depth 6");
    }
}
