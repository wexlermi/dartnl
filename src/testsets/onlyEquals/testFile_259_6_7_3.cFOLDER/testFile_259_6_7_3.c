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
// x0 = 2
// x1 = -7
// x2 = 8
// x3 = 10
// x4 = 8
// x5 = 10
// x6 = 2
  if ((-2 * x1 * x5 * x5) + (2 * x2) == 1416)
    {
      printf ("I am here at depth 6");
      if ((1 * x0 * x3 * x3) + (-3 * 1) == 197)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x0 * x1 * x5) + (1 * x0 * x3 * x5) + (40 * x0 * x5 * x6) ==
	      1660)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x0 * x0 * x5) == -40)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x2 * x3 * x3) == 800)
		    {
		      printf ("I am here at depth 2");
		      if ((-3 * x0 * x3 * x4) + (-2 * x4 * x5 * x5) +
			  (-1 * x3 * x4 * x6) == -2240)
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