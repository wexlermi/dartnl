#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -3
// x1 = -6
// x2 = 2
  if ((6 * x0 * x1) == 108)
    {
      printf ("I am here at depth 10");
      if ((42 * x2 * x2) + (-1 * x0) == 171)
	{
	  printf ("I am here at depth 9");
	  if ((-1 * x1 * x1) + (-5 * x1) == -6)
	    {
	      printf ("I am here at depth 8");
	      if ((1 * x0 * x2) + (-1 * x2) == -8)
		{
		  printf ("I am here at depth 7");
		  if ((-2 * x0 * x1) + (-1 * x0) == -33)
		    {
		      printf ("I am here at depth 6");
		      if ((-1 * x2 * x2) + (1 * x0) == -7)
			{
			  printf ("I am here at depth 5");
			  if ((-1 * x2) == -2)
			    {
			      printf ("I am here at depth 4");
			      if ((2 * x1 * x2) == -24)
				{
				  printf ("I am here at depth 3");
				  if ((6 * x0 * x2) == -36)
				    {
				      printf ("I am here at depth 2");
				      if ((1 * x1 * x1) + (-7 * x1 * x2) ==
					  120)
					{
					  printf ("I am here at depth 1");

					}
				      else
					{
					  printf
					    ("I am at the else of depth 1");
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
  else
    {
      printf ("I am at the else of depth 10");
    }
}
