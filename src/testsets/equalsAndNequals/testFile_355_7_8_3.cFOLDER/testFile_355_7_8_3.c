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
//Possible solution to enter:
// x0 = 9
// x1 = -3
// x2 = -10
// x3 = -10
// x4 = 2
// x5 = 4
// x6 = -10
// x7 = 0
  if ((-8 * x1 * x5 * x7) + (-1 * x0 * x1) + (3 * x2 * x4) == -33)
    {
      printf ("I am here at depth 7");
      if ((35 * x0 * x3 * x4) + (-1 * x2 * x2 * x6) + (-1 * x1 * x5) +
	  (-1 * x4 * x5) + (4 * x4 * x6) != -5286)
	{
	  printf ("I am here at depth 6");
	  if ((-184 * x0 * x0 * x5) + (-3 * x0 * x2 * x5) + (1 * x0 * x4) !=
	      -58542)
	    {
	      printf ("I am here at depth 5");
	      if ((-3 * x1 * x2 * x2) + (3 * x0 * x0 * x7) +
		  (1 * x1 * x3 * x7) + (-1 * x1 * x5 * x7) == 900)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x2 * x4 * x4) + (1 * x0 * x2 * x5) +
		      (-20 * x0 * x4 * x5) + (1 * x4 * x4 * x5) +
		      (-1 * x0 * x5 * x7) + (1 * x2 * x6 * x7) != -1875)
		    {
		      printf ("I am here at depth 3");
		      if ((1 * x1 * x1 * x3) + (5 * x3 * x3 * x4) +
			  (-14 * x3 * x3 * x6) + (-1 * x1 * x6 * x7) +
			  (4 * x7) != 14891)
			{
			  printf ("I am here at depth 2");
			  if ((-5 * x2 * x4 * x5) != 442)
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
