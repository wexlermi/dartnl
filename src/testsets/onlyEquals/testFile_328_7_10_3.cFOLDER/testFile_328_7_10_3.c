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
  int x7;
  int x8;
  int x9;
//Possible solution to enter:
// x0 = -1
// x1 = -4
// x2 = -7
// x3 = 8
// x4 = 6
// x5 = -6
// x6 = -7
// x7 = -4
// x8 = -3
// x9 = 7
  if ((3 * x1 * x1 * x6) + (-1 * x1 * x5 * x9) == -504)
    {
      printf ("I am here at depth 7");
      if ((-12 * x0 * x2 * x2) + (1 * x4 * x5 * x5) + (-2 * x1 * x7 * x7) +
	  (-1 * x0 * x0 * x9) == 925)
	{
	  printf ("I am here at depth 6");
	  if ((2 * x1 * x2 * x2) + (-1 * x4 * x8 * x8) + (-5 * x0 * x7 * x9) +
	      (7 * x1 * x2) == -390)
	    {
	      printf ("I am here at depth 5");
	      if ((9 * x3 * x4 * x4) == 2592)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x0 * x4) + (-119 * x4 * x7) + (1 * x7) == 2846)
		    {
		      printf ("I am here at depth 3");
		      if ((-5 * x0 * x1 * x3) + (-3 * x3 * x5 * x8) +
			  (-1 * x0 * x4) + (-1 * x6 * x6) == -635)
			{
			  printf ("I am here at depth 2");
			  if ((-2 * x2 * x6 * x7) + (-5 * x0 * x5) == 362)
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
