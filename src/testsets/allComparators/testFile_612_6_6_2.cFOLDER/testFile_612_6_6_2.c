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
// x0 = -10
// x1 = 9
// x2 = 1
// x3 = 2
// x4 = -8
// x5 = -6
  if ((-1 * x0) + (4 * x4) != -21)
    {
      printf ("I am here at depth 6");
      if ((-2 * x0 * x5) + (-1 * x0) + (3 * x4) <= -82)
	{
	  printf ("I am here at depth 5");
	  if ((2 * x1 * x3) + (1 * x4) <= 89)
	    {
	      printf ("I am here at depth 4");
	      if ((-13 * x2 * x5) + (-1 * 1) > 59)
		{
		  printf ("I am here at depth 3");
		  if ((2 * x3) > -12)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x1 * x1) > 11)
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
