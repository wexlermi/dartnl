#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
  int x6;
//Possible solution to enter:
// x0 = -2
// x1 = 10
// x2 = 1
// x3 = -4
// x4 = 4
// x5 = 7
// x6 = 7
  if ((-1 * x0 * x2) == 2)
    {
      printf ("I am here at depth 8");
      if ((2 * x3 * x4) + (1 * x2 * x6) != 23)
	{
	  printf ("I am here at depth 7");
	  if ((3 * x2 * x3) + (1 * x3 * x3) == 4)
	    {
	      printf ("I am here at depth 6");
	      if ((2 * x2 * x3) + (-4 * x0 * x4) != 64)
		{
		  printf ("I am here at depth 5");
		  if ((2 * x0 * x3) + (1 * x2 * x3) != 45)
		    {
		      printf ("I am here at depth 4");
		      if ((-4 * x4 * x4) == -64)
			{
			  printf ("I am here at depth 3");
			  if ((-4 * x3 * x5) == 112)
			    {
			      printf ("I am here at depth 2");
			      if ((-1 * x2 * x3) + (1 * x4) == 8)
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
