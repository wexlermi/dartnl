#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 0
// x1 = -10
// x2 = -4
// x3 = 8
  if ((1 * x1 * x2) != -37)
    {
      printf ("I am here at depth 9");
      if ((1 * x1 * x2) != 128)
	{
	  printf ("I am here at depth 8");
	  if ((-1 * x1 * x2) + (1 * x2) == -44)
	    {
	      printf ("I am here at depth 7");
	      if ((7 * x2 * x2) == 112)
		{
		  printf ("I am here at depth 6");
		  if ((-3 * x0 * x2) + (-1 * x3) == -8)
		    {
		      printf ("I am here at depth 5");
		      if ((-1 * x0 * x3) != -55)
			{
			  printf ("I am here at depth 4");
			  if ((-1 * x1 * x2) + (3 * x2 * x2) != -27)
			    {
			      printf ("I am here at depth 3");
			      if ((1 * x3) == 8)
				{
				  printf ("I am here at depth 2");
				  if ((1 * x1 * x3) + (-20 * x2) != 8)
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