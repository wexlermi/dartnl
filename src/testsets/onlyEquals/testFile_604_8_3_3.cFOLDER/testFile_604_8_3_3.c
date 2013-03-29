#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 1
// x1 = 4
// x2 = 8
  if ((-2 * x2 * x2 * x2) + (-2 * x0 * x0) + (-2 * x0 * x1) + (17 * x2 * x2) +
      (-1 * 1) == 53)
    {
      printf ("I am here at depth 8");
      if ((1 * x0 * x0 * x2) + (19 * x0 * x1 * x2) + (-2 * x0 * x0) == 614)
	{
	  printf ("I am here at depth 7");
	  if ((-1 * x0 * x1) == -4)
	    {
	      printf ("I am here at depth 6");
	      if ((2 * x1 * x2 * x2) + (25 * 1) == 537)
		{
		  printf ("I am here at depth 5");
		  if ((-12 * x1 * x2 * x2) + (12 * 1) == -3060)
		    {
		      printf ("I am here at depth 4");
		      if ((-1 * x1 * x1 * x1) + (-45 * x0 * x0 * x2) == -424)
			{
			  printf ("I am here at depth 3");
			  if ((4 * x0 * x1 * x2) + (5 * x1 * x1 * x2) +
			      (-1 * x1 * x2 * x2) + (-7 * x1 * x1) +
			      (1 * x1 * x2) + (1 * x2) == 440)
			    {
			      printf ("I am here at depth 2");
			      if ((1 * x0 * x0 * x1) + (-2 * x0 * x1 * x2) +
				  (1 * x1 * x1) + (-2 * 1) == -46)
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
  else
    {
      printf ("I am at the else of depth 8");
    }
}
