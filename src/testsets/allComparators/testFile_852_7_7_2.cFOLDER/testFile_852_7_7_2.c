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
// x0 = -5
// x1 = 0
// x2 = 8
// x3 = 3
// x4 = -6
// x5 = 0
// x6 = 3
  if ((-1 * x1 * x4) + (-2 * x1 * x5) + (-2 * x2) != -75)
    {
      printf ("I am here at depth 7");
      if ((1 * x4 * x4) < 135)
	{
	  printf ("I am here at depth 6");
	  if ((-4 * x0 * x2) + (-4 * x3) <= 228)
	    {
	      printf ("I am here at depth 5");
	      if ((-1 * x3 * x3) > -15)
		{
		  printf ("I am here at depth 4");
		  if ((2 * x1 * x1) == 0)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x1 * x3) > -25)
			{
			  printf ("I am here at depth 2");
			  if ((2 * x2 * x3) > -30)
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
