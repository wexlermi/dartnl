#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 2
// x1 = -9
  if ((1 * x1 * x1) == 81)
    {
      printf ("I am here at depth 10");
      if ((3 * x1 * x1) + (56 * x0) + (-1 * x1) == 364)
	{
	  printf ("I am here at depth 9");
	  if ((4 * x1) == -36)
	    {
	      printf ("I am here at depth 8");
	      if ((1 * x0 * x1) == -18)
		{
		  printf ("I am here at depth 7");
		  if ((-1 * x0) == -2)
		    {
		      printf ("I am here at depth 6");
		      if ((1 * x0 * x1) + (2 * x0) == -14)
			{
			  printf ("I am here at depth 5");
			  if ((-4 * x0 * x0) + (1 * x0 * x1) +
			      (-1 * x1 * x1) == -115)
			    {
			      printf ("I am here at depth 4");
			      if ((-2 * x1) == 18)
				{
				  printf ("I am here at depth 3");
				  if ((-2 * 1) == -2)
				    {
				      printf ("I am here at depth 2");
				      if ((-1 * x0 * x0) + (-1 * x1 * x1) ==
					  -85)
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