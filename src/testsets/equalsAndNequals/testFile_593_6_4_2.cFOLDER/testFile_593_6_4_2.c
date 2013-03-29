#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 5
// x1 = 10
// x2 = -7
// x3 = -4
  if ((-3 * x2 * x2) == -147)
    {
      printf ("I am here at depth 6");
      if ((2 * x0 * x1) + (-1 * x2 * x2) != 144)
	{
	  printf ("I am here at depth 5");
	  if ((-2 * x2 * x3) + (-1 * x2) + (-3 * x3) != -35)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x1) != -54)
		{
		  printf ("I am here at depth 3");
		  if ((13 * x1 * x1) + (-13 * x2) == 1391)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x2 * x2) + (2 * x0) + (-1 * x2) != 98)
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
