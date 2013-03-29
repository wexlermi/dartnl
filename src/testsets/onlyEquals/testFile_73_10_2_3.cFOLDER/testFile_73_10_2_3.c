#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 7
// x1 = -8
  if ((1 * x0 * x0 * x1) + (6 * x0 * x1 * x1) + (-2 * x1 * x1 * x1) +
      (-1 * x1 * x1) + (-1 * x0) == 3249)
    {
      printf ("I am here at depth 10");
      if ((-1 * x1 * x1 * x1) + (2 * x0 * x1) + (3 * x1 * x1) + (3 * x0) +
	  (-1 * x1) + (-1 * 1) == 620)
	{
	  printf ("I am here at depth 9");
	  if ((-1 * x0 * x0 * x0) + (-1 * x1 * x1 * x1) + (4 * x0 * x0) +
	      (-2 * x1) + (1 * 1) == 382)
	    {
	      printf ("I am here at depth 8");
	      if ((2 * x0 * x0 * x1) + (-13 * x1 * x1 * x1) + (-2 * x0) +
		  (-1 * x1) + (1 * 1) == 5867)
		{
		  printf ("I am here at depth 7");
		  if ((4 * x0 * x1 * x1) + (-1 * x0) + (101 * 1) == 1886)
		    {
		      printf ("I am here at depth 6");
		      if ((1 * 1) == 1)
			{
			  printf ("I am here at depth 5");
			  if ((-4 * x0 * x1 * x1) == -1792)
			    {
			      printf ("I am here at depth 4");
			      if ((2 * x0 * x0 * x1) + (-1 * x0 * x1 * x1) +
				  (1 * x1 * x1 * x1) + (-1 * x0 * x1) ==
				  -1688)
				{
				  printf ("I am here at depth 3");
				  if ((-9 * x0 * x0 * x1) + (3 * x0 * x1) ==
				      3360)
				    {
				      printf ("I am here at depth 2");
				      if ((-1 * x0) == -7)
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
