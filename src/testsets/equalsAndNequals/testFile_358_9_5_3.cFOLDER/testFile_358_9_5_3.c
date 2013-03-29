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
// x0 = 0
// x1 = 7
// x2 = 6
// x3 = 10
// x4 = -4
  if ((-1 * x0 * x2) + (11 * x2 * x4) == -264)
    {
      printf ("I am here at depth 9");
      if ((1 * x1 * x3 * x3) + (1 * x2 * x4) + (10 * x4 * x4) != 851)
	{
	  printf ("I am here at depth 8");
	  if ((32 * x1 * x1 * x3) + (-1 * x3 * x3 * x4) +
	      (-10 * x3 * x4 * x4) == 14480)
	    {
	      printf ("I am here at depth 7");
	      if ((1 * x0 * x1 * x1) + (1 * x0 * x1 * x3) + (1 * x2 * x3) +
		  (-1 * x2) != 70)
		{
		  printf ("I am here at depth 6");
		  if ((-1 * x0 * x2 * x3) + (1 * x2 * x2 * x4) == -144)
		    {
		      printf ("I am here at depth 5");
		      if ((3 * x1 * x2 * x2) + (1 * x2 * x2 * x3) +
			  (-2 * x1 * x3 * x4) + (-10 * x0 * x4) == 1676)
			{
			  printf ("I am here at depth 4");
			  if ((-1 * x3 * x4 * x4) + (1 * x0 * x4) +
			      (18 * x0) == -160)
			    {
			      printf ("I am here at depth 3");
			      if ((-7 * x0 * x0 * x3) + (-4 * x2 * x2 * x3) +
				  (4 * x0 * x1) == -1440)
				{
				  printf ("I am here at depth 2");
				  if ((-1 * x1 * x2 * x2) +
				      (1 * x0 * x4 * x4) +
				      (2 * x3 * x4 * x4) + (-1 * x1 * x2) +
				      (-3 * x1 * x4) == 110)
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
