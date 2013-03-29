#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 4
// x1 = -4
  if ((1 * x0 * x1 * x1 * x1) + (1 * x0 * x0 * x1) + (-3 * x1 * x1) +
      (2 * x0) + (-1 * 1) == -361)
    {
      printf ("I am here at depth 9");
      if ((5 * x0 * x0 * x1 * x1) + (-1 * x0 * x0 * x0) + (-4 * x1 * x1) ==
	  1152)
	{
	  printf ("I am here at depth 8");
	  if ((2 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x0) +
	      (1 * x0 * x1 * x1) + (24 * x1 * x1 * x1) == -3584)
	    {
	      printf ("I am here at depth 7");
	      if ((-1 * x0 * x0 * x1 * x1) + (1 * x0 * x1 * x1 * x1) +
		  (3 * x0 * x0 * x1) + (6 * x0 * x0) + (1 * x1) == -612)
		{
		  printf ("I am here at depth 6");
		  if ((-8 * x0 * x0 * x0 * x1 * x1) +
		      (1 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x1 * x1) +
		      (1 * x1 * x1 * x1) + (253 * x0 * x1) + (22 * x1 * x1) +
		      (-1 * x0) + (-3 * x1) + (5 * 1) == -13027)
		    {
		      printf ("I am here at depth 5");
		      if ((26 * x1 * x1 * x1) + (-2 * x0 * x1) +
			  (1 * x1 * x1) + (3 * 1) == -1613)
			{
			  printf ("I am here at depth 4");
			  if ((-1 * x0 * x0 * x0 * x1 * x1) +
			      (-1 * x0 * x0 * x1 * x1 * x1) +
			      (-1 * x1 * x1 * x1 * x1 * x1) +
			      (3 * x0 * x0 * x0) + (-1 * x0 * x0 * x1) +
			      (1 * x0 * x1 * x1) + (-3 * x0 * x0) +
			      (1 * x1) == 1292)
			    {
			      printf ("I am here at depth 3");
			      if ((1 * x0 * x0 * x1) == -64)
				{
				  printf ("I am here at depth 2");
				  if ((1 * x0 * x1 * x1 * x1 * x1) +
				      (-12 * x0 * x0 * x0 * x0) +
				      (-2 * x0 * x0 * x1 * x1) +
				      (-1 * x0 * x0 * x1) + (-1 * 1) == -2497)
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
  else
    {
      printf ("I am at the else of depth 9");
    }
}
