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
// x0 = -1
// x1 = -7
// x2 = 8
// x3 = 1
// x4 = 10
// x5 = -5
// x6 = -4
  if ((2 * x0 * x1 * x3) + (-35 * x2 * x4 * x5) + (1 * x1 * x1) +
      (2 * x3 * x3) != 14051)
    {
      printf ("I am here at depth 6");
      if ((5 * x1 * x3 * x3) + (1 * x1 * x3 * x4) + (3 * x2 * x4 * x4) +
	  (1 * x4 * x4 * x5) + (2 * x6) + (1 * 1) < 1816)
	{
	  printf ("I am here at depth 5");
	  if ((5 * x3 * x4 * x4) > 479)
	    {
	      printf ("I am here at depth 4");
	      if ((-6 * x1 * x1 * x3) + (-5 * x0 * x3 * x3) +
		  (1 * x2 * x4 * x6) + (-1 * x1) > -643)
		{
		  printf ("I am here at depth 3");
		  if ((44 * x0 * x1 * x5) + (-1 * x0 * x1) <= -1464)
		    {
		      printf ("I am here at depth 2");
		      if ((-2 * x2 * x3 * x5) + (32 * x1 * x1 * x6) +
			  (-5 * x4 * x5 * x6) != -7099)
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