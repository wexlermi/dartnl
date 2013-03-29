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
// x0 = 2
// x1 = -8
// x2 = -9
// x3 = -10
// x4 = 7
  if ((6 * x1) == -48)
    {
      printf ("I am here at depth 6");
      if ((1 * x1 * x1 * x1) + (-2 * x0 * x2 * x2) + (12 * x0 * x2 * x3) +
	  (1 * x0 * x3 * x4) + (-3 * x1 * x3 * x4) + (6 * x1 * x2) != -111)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x1 * x4 * x4) != -441)
	    {
	      printf ("I am here at depth 4");
	      if ((-2 * x2 * x2 * x3) + (-10 * x3 * x4 * x4) +
		  (1 * x3 * x4) == 6450)
		{
		  printf ("I am here at depth 3");
		  if ((7 * x0 * x0 * x3) == -280)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x0 * x0 * x1) + (1 * x1 * x1) +
			  (2 * x3 * x3) != 280)
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
