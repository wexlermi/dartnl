#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
//Possible solution to enter:
// x0 = 6
// x1 = -10
// x2 = -5
// x3 = 7
// x4 = -6
// x5 = 3
  if ((-3 * x2 * x3 * x3) + (2 * x2 * x2 * x5) + (-1 * x3) < 884)
    {
      printf ("I am here at depth 8");
      if ((-6 * x1 * x3 * x3) + (-1 * x2 * x3 * x4) + (1 * x3 * x4 * x4) +
	  (-2 * x0 * x4) < 3100)
	{
	  printf ("I am here at depth 7");
	  if ((-3 * x1 * x1 * x1) + (-6 * x5 * x5) <= 2969)
	    {
	      printf ("I am here at depth 6");
	      if ((-2 * x1 * x2 * x2) + (-1 * x0 * x2) > 464)
		{
		  printf ("I am here at depth 5");
		  if ((1 * x0 * x5 * x5) + (1 * x2 * x4) + (-4 * x4 * x4) +
		      (-1 * x3) < -45)
		    {
		      printf ("I am here at depth 4");
		      if ((-1 * x0 * x3) == -42)
			{
			  printf ("I am here at depth 3");
			  if ((1 * x0 * x3 * x4) + (6 * x1 * x4 * x4) +
			      (1 * x5) > -2461)
			    {
			      printf ("I am here at depth 2");
			      if ((-12 * x0 * x2 * x4) == -2160)
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
      else
	{
	  printf ("I am at the else of depth 7");
	}
    }
  else
    {
      printf ("I am at the else of depth 8");
    }
}