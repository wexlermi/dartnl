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
// x1 = 3
// x2 = 3
// x3 = -8
// x4 = 0
// x5 = -1
// x6 = -3
  if ((-1 * x2 * x6) == 9)
    {
      printf ("I am here at depth 7");
      if ((-55 * x4 * x4) == 0)
	{
	  printf ("I am here at depth 6");
	  if ((-1 * x5) == 1)
	    {
	      printf ("I am here at depth 5");
	      if ((1 * x0 * x1) == -21)
		{
		  printf ("I am here at depth 4");
		  if ((-1 * x2 * x4) == 0)
		    {
		      printf ("I am here at depth 3");
		      if ((-5 * x1 * x5) + (-1 * x6) == 18)
			{
			  printf ("I am here at depth 2");
			  if ((-3 * x0 * x6) + (-4 * x3) == -31)
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