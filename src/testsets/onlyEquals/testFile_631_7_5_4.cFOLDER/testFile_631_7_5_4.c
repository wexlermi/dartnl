#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 9
// x1 = -10
// x2 = 5
// x3 = 6
// x4 = -7
  if ((-1 * x2 * x2 * x2 * x3) + (3 * x2 * x2 * x3) == -300)
    {
      printf ("I am here at depth 7");
      if ((-2 * x0 * x1 * x2 * x3) + (-1 * x1 * x2 * x3 * x4) +
	  (1 * x2 * x2 * x2) == 3425)
	{
	  printf ("I am here at depth 6");
	  if ((3 * x1 * x2 * x3 * x3) + (-1 * x0) == -5409)
	    {
	      printf ("I am here at depth 5");
	      if ((1 * x2 * x2 * x2 * x4) + (-1 * x2 * x3 * x3 * x4) +
		  (-2 * x0 * x2 * x4 * x4) + (1 * x1 * x2 * x4 * x4) +
		  (-1 * x0 * x0 * x1) + (2 * x0 * x2 * x4) +
		  (2 * x3 * x4 * x4) == -5707)
		{
		  printf ("I am here at depth 4");
		  if ((-2 * x1 * x2 * x2 * x2) + (3 * x2 * x2 * x2 * x2) +
		      (-1 * x0 * x0 * x2 * x3) + (1 * x1 * x3 * x3 * x3) +
		      (1 * x1 * x4) + (1 * x2) == -140)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x0 * x0 * x3 * x4) + (1 * x1 * x1 * x1) +
			  (-5 * x0 * x0) == 1997)
			{
			  printf ("I am here at depth 2");
			  if ((1 * x0 * x0 * x2 * x2) +
			      (1 * x2 * x3 * x4 * x4) +
			      (-5 * x3 * x4 * x4 * x4) +
			      (1 * x4 * x4 * x4 * x4) + (-3 * x0 * x1 * x1) +
			      (-1 * x2 * x2 * x3) + (5 * x2 * x3 * x4) +
			      (-1 * x2 * x4 * x4) == 12041)
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
