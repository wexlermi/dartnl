#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -4
// x1 = 3
// x2 = -8
  if ((2 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x2) +
      (1 * x0 * x0 * x1 * x2) + (-1 * x0 * x1 * x1 * x2) +
      (2 * x0 * x0 * x2 * x2) + (1 * x0 * x2 * x2 * x2) +
      (1 * x2 * x2 * x2 * x2) + (11 * x0 * x0 * x1) + (-1 * x0 * x1 * x1) +
      (5 * 1) == 8763)
    {
      printf ("I am here at depth 9");
      if ((-6 * x0 * x0 * x1) + (1 * x0 * x1 * x2) + (-10 * x0 * x2 * x2) +
	  (1 * x2 * x2 * x2) + (-1 * x0) == 1860)
	{
	  printf ("I am here at depth 8");
	  if ((-1 * x0 * x0 * x0 * x2) + (4 * x2 * x2 * x2) + (1 * x2 * x2) +
	      (2 * x0) == -2504)
	    {
	      printf ("I am here at depth 7");
	      if ((-24 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x2) +
		  (46 * x1 * x2 * x2) + (-1 * x1 * x2) + (-1 * x2) == 13760)
		{
		  printf ("I am here at depth 6");
		  if ((3 * x0 * x0 * x0 * x2) + (1 * x1 * x2 * x2 * x2) +
		      (-1 * x1 * x1) + (3 * x0 * x2) + (1 * x2 * x2) +
		      (-39 * x1) == 34)
		    {
		      printf ("I am here at depth 5");
		      if ((-3 * x0 * x0) + (-1 * x1 * x2) == -24)
			{
			  printf ("I am here at depth 4");
			  if ((-1 * x0 * x0 * x0) + (2 * x1 * x1 * x1) +
			      (-2 * x0) == 126)
			    {
			      printf ("I am here at depth 3");
			      if ((-2 * x2 * x2 * x2 * x2) + (1 * x2) ==
				  -8200)
				{
				  printf ("I am here at depth 2");
				  if ((1 * x0 * x1 * x1 * x2) +
				      (1 * x0 * x1 * x1) +
				      (-1 * x1 * x1 * x1) + (4 * x1 * x1) ==
				      261)
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
