#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 9
// x1 = -1
// x2 = -8
// x3 = 4
// x4 = -8
  if ((13 * x1 * x4) == 104)
    {
      printf ("I am here at depth 9");
      if ((3 * x2 * x2) + (3 * x2 * x4) + (19 * x2) == 232)
	{
	  printf ("I am here at depth 8");
	  if ((-1 * x2) == 8)
	    {
	      printf ("I am here at depth 7");
	      if ((2 * x3) + (-1 * x4) == 16)
		{
		  printf ("I am here at depth 6");
		  if ((-1 * x0 * x2) == 72)
		    {
		      printf ("I am here at depth 5");
		      if ((-100 * x0 * x1) + (-5 * x3 * x4) == 1060)
			{
			  printf ("I am here at depth 4");
			  if ((-1 * x0 * x1) == 9)
			    {
			      printf ("I am here at depth 3");
			      if ((-2 * x1 * x2) + (1 * x2) == -24)
				{
				  printf ("I am here at depth 2");
				  if ((3 * x4) == -24)
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