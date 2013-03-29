#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = -7
  if ((1 * x) == -7)
    {
      printf ("I am here at depth 8");
      if ((2 * x * x) + (-1 * x) == 105)
	{
	  printf ("I am here at depth 7");
	  if ((2 * 1) == 2)
	    {
	      printf ("I am here at depth 6");
	      if ((-5 * x * x) + (-1 * 1) == -246)
		{
		  printf ("I am here at depth 5");
		  if ((-1 * x) == 7)
		    {
		      printf ("I am here at depth 4");
		      if ((1 * x * x) + (-2 * x) + (-1 * 1) == 62)
			{
			  printf ("I am here at depth 3");
			  if ((-1 * x * x) + (-2 * 1) == -51)
			    {
			      printf ("I am here at depth 2");
			      if ((7 * 1) == 7)
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
