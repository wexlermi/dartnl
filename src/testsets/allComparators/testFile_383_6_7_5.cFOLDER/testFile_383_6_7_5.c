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
  int x6;
//Possible solution to enter:
// x0 = -7
// x1 = 0
// x2 = 1
// x3 = -10
// x4 = 4
// x5 = 0
// x6 = -5
  if ((-5 * x0 * x1 * x3 * x3 * x3) < 9)
    {
      printf ("I am here at depth 6");
      if ((2 * x2 * x2 * x3 * x5) >= -7)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x0 * x0 * x0 * x0 * x4) + (-1 * x0 * x0 * x1 * x1 * x5) +
	      (-2 * x0 * x1 * x2 * x3 * x5) + (12 * x0 * x2 * x3 * x3 * x5) +
	      (1 * x0 * x3 * x4 * x5 * x5) + (-1 * x0 * x0 * x0 * x0 * x6) +
	      (1 * x1 * x1 * x2 * x2 * x6) + (1 * x1 * x2 * x4 * x4 * x6) +
	      (435 * x1 * x2 * x3 * x6 * x6) + (12 * x0 * x6 * x6 * x6 * x6) +
	      (1 * x6 * x6 * x6 * x6 * x6) + (-1 * x1 * x2 * x4 * x5) +
	      (-3 * x0 * x3 * x5 * x5) + (1 * x5 * x5 * x6 * x6) > -53266)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x0 * x0 * x2 * x3 * x4) +
		  (6 * x0 * x0 * x2 * x4 * x4) != 6622)
		{
		  printf ("I am here at depth 3");
		  if ((9 * x2 * x2 * x3 * x4 * x6) +
		      (-5 * x0 * x3 * x4 * x5 * x6) +
		      (1 * x2 * x2 * x3 * x6 * x6) +
		      (-1 * x1 * x3 * x3 * x3) > 1504)
		    {
		      printf ("I am here at depth 2");
		      if ((8 * x1 * x2 * x5 * x5 * x5) +
			  (-1 * x1 * x1 * x5 * x6 * x6) >= -84)
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