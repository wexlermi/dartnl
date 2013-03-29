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
// x0 = -1
// x1 = -2
// x2 = 4
// x3 = -10
// x4 = -1
// x5 = -6
// x6 = 5
// x7 = 2
  if ((-1 * x2) == -4)
    {
      printf ("I am here at depth 7");
      if ((1 * x6) == 5)
	{
	  printf ("I am here at depth 6");
	  if ((-4 * x2) == -16)
	    {
	      printf ("I am here at depth 5");
	      if ((-1 * x3) == 10)
		{
		  printf ("I am here at depth 4");
		  if ((-3 * x6) == -15)
		    {
		      printf ("I am here at depth 3");
		      if ((1 * 1) == 1)
			{
			  printf ("I am here at depth 2");
			  if ((-10 * x5) == 60)
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
