#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 7
// x1 = -1
// x2 = 3
  if ((-3 * x0 * x1) + (1 * x0 * x2) + (1 * x2) < 52)
    {
      printf ("I am here at depth 9");
      if ((1 * x0 * x1) + (-2 * x1 * x1) + (1 * 1) > -40)
	{
	  printf ("I am here at depth 8");
	  if ((1 * x0 * x1) + (2 * x2 * x2) < 108)
	    {
	      printf ("I am here at depth 7");
	      if ((1 * x0 * x2) + (3 * x1 * x2) >= 0)
		{
		  printf ("I am here at depth 6");
		  if ((5 * x0 * x2) <= 192)
		    {
		      printf ("I am here at depth 5");
		      if ((2 * x1 * x2) + (10 * x2) != 50)
			{
			  printf ("I am here at depth 4");
			  if ((5 * x1 * x2) > -92)
			    {
			      printf ("I am here at depth 3");
			      if ((-2 * x1 * x2) + (4 * x2 * x2) +
				  (-4 * x2) <= 52)
				{
				  printf ("I am here at depth 2");
				  if ((1 * x0 * x2) <= 97)
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