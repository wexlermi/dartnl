#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -4
// x1 = 4
// x2 = -3
  if ((1 * 1) == 1)
    {
      printf ("I am here at depth 9");
      if ((2 * 1) == 2)
	{
	  printf ("I am here at depth 8");
	  if ((1 * x1) == 4)
	    {
	      printf ("I am here at depth 7");
	      if ((8 * x1) == 32)
		{
		  printf ("I am here at depth 6");
		  if ((1 * x2) == -3)
		    {
		      printf ("I am here at depth 5");
		      if ((1 * 1) == 1)
			{
			  printf ("I am here at depth 4");
			  if ((-2 * x1) == -8)
			    {
			      printf ("I am here at depth 3");
			      if ((1 * x1) == 4)
				{
				  printf ("I am here at depth 2");
				  if ((-1 * x2) == 3)
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