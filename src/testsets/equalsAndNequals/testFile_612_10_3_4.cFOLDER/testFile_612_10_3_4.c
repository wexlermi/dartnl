#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -6
// x1 = 7
// x2 = -4
  if ((-10 * x0 * x0 * x1 * x1) + (-5 * x0 * x2 * x2) + (2 * x0) != -17245)
    {
      printf ("I am here at depth 10");
      if ((2 * x0 * x0 * x1 * x1) + (-1 * x0 * x1 * x2 * x2) +
	  (-2 * x2 * x2) + (2 * x0) + (12 * x1) + (-2 * x2) != 4207)
	{
	  printf ("I am here at depth 9");
	  if ((1 * x1 * x1 * x1 * x1) + (-29 * x0 * x0 * x0 * x2) +
	      (-15 * x1 * x1 * x1 * x2) + (-2 * x0 * x2 * x2) +
	      (-1 * x1 * x1) + (-880 * x1 * x2) + (4 * x0) + (-1 * x1) ==
	      22677)
	    {
	      printf ("I am here at depth 8");
	      if ((-1 * x0 * x0 * x1 * x1) + (-1 * x0 * x1 * x1 * x1) +
		  (2 * x1 * x1 * x1 * x2) + (-3 * x0 * x1 * x2 * x2) +
		  (3 * x0 * x0 * x0) + (-32 * x1 * x1 * x2) + (1 * x1 * x1) +
		  (1 * 1) == 5240)
		{
		  printf ("I am here at depth 7");
		  if ((-1 * x0 * x1 * x1 * x1) + (1 * x0 * x0 * x2 * x2) +
		      (-1 * x0 * x1 * x2) + (-1 * x2 * x2 * x2) + (1 * x2) +
		      (1 * 1) != 2547)
		    {
		      printf ("I am here at depth 6");
		      if ((1 * x0 * x1 * x1 * x2) + (1 * x0 * x1 * x2) +
			  (-2 * x1 * x1) + (-1 * x1 * x2) != 1219)
			{
			  printf ("I am here at depth 5");
			  if ((-2 * x0 * x1 * x2 * x2) + (1 * x0 * x2 * x2) +
			      (-1 * x0) + (1 * 1) != 1216)
			    {
			      printf ("I am here at depth 4");
			      if ((1 * x1 * x1 * x1 * x2) + (-1 * x1) ==
				  -1379)
				{
				  printf ("I am here at depth 3");
				  if ((13 * x0 * x1 * x2 * x2) +
				      (4 * x1 * x2 * x2 * x2) +
				      (-1 * x0 * x2 * x2) == -10432)
				    {
				      printf ("I am here at depth 2");
				      if ((-1 * x0 * x0 * x0 * x1) +
					  (-2 * x1 * x1 * x1 * x1) +
					  (-1 * x0 * x0 * x0 * x2) +
					  (1 * x1 * x1 * x1 * x2) +
					  (20 * x1 * x2 * x2 * x2) +
					  (1 * x0 * x1 * x1) + (-1 * x0) +
					  (-1 * x2) != -14679)
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
