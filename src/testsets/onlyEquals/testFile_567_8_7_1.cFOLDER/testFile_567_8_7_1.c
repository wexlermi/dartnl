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
// x0 = -6
// x1 = 8
// x2 = -9
// x3 = 5
// x4 = -4
// x5 = -4
// x6 = 1
  if ((-24 * 1) == -24)
    {
      printf ("I am here at depth 8");
      if ((1 * x4) == -4)
	{
	  printf ("I am here at depth 7");
	  if ((20 * x4) == -80)
	    {
	      printf ("I am here at depth 6");
	      if ((-2 * x4) == 8)
		{
		  printf ("I am here at depth 5");
		  if ((1 * x1) == 8)
		    {
		      printf ("I am here at depth 4");
		      if ((17 * x3) == 85)
			{
			  printf ("I am here at depth 3");
			  if ((1 * 1) == 1)
			    {
			      printf ("I am here at depth 2");
			      if ((2 * x3) == 10)
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
