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
// x0 = -3
// x1 = 1
// x2 = 3
// x3 = -10
// x4 = 1
  if ((-2 * x3 * x4) == 20)
    {
      printf ("I am here at depth 9");
      if ((1 * x0 * x1 * x2 * x3 * x3) + (7 * x1 * x2 * x3 * x3 * x4) +
	  (-2 * x0 * x1 * x1 * x4) + (2 * x1 * x2 * x2) + (1 * x3 * x3) ==
	  1324)
	{
	  printf ("I am here at depth 8");
	  if ((9 * x0 * x0 * x0 * x0 * x2) + (-1 * x0 * x0 * x0 * x2 * x2) +
	      (-1 * x0 * x0 * x0 * x1 * x4) + (29 * x0 * x1 * x2) +
	      (-1 * x0 * x2 * x2) + (4 * x1 * x3 * x4) == 2183)
	    {
	      printf ("I am here at depth 7");
	      if ((33 * x0 * x0 * x1 * x2 * x3) +
		  (-1 * x0 * x0 * x2 * x2 * x4) +
		  (-5 * x0 * x0 * x3 * x4 * x4) +
		  (-1 * x0 * x1 * x3 * x4 * x4) +
		  (1 * x1 * x4 * x4 * x4 * x4) + (-2 * x0 * x0 * x0 * x2) +
		  (2 * x0 * x0 * x2) != -8345)
		{
		  printf ("I am here at depth 6");
		  if ((1 * x1 * x2 * x2 * x2 * x2) +
		      (22 * x1 * x2 * x2 * x2 * x3) +
		      (-1 * x0 * x1 * x1 * x1 * x4) +
		      (1 * x2 * x2 * x2 * x4 * x4) + (5 * x0 * x0 * x0 * x1) +
		      (1 * x0 * x0 * x3 * x3) + (1 * x0 * x0 * x3) +
		      (2 * x1 * x3 * x4) != -5108)
		    {
		      printf ("I am here at depth 5");
		      if ((1 * x0 * x1 * x1 * x1 * x1) +
			  (-3 * x0 * x0 * x1 * x2 * x2) +
			  (-1 * x2 * x2 * x2 * x2 * x2) +
			  (1 * x0 * x1 * x2 * x2 * x4) +
			  (1 * x2 * x2 * x2 * x2) + (1 * x0 * x1 * x2 * x3) +
			  (1 * x0 * x0 * x0 * x4) + (-1 * x0 * x1 * x1 * x4) +
			  (-1 * x0 * x1 * x3) != -438)
			{
			  printf ("I am here at depth 4");
			  if ((-2 * x1 * x1 * x1 * x1 * x1) +
			      (-3 * x0 * x1 * x2 * x2 * x2) +
			      (1 * x2 * x2 * x2 * x2 * x2) +
			      (-1 * x0 * x1 * x1 * x1 * x4) +
			      (1 * x0 * x1 * x1 * x1) +
			      (-15 * x0 * x0 * x0 * x3) +
			      (1 * x0 * x1 * x2 * x3) +
			      (7 * x0 * x1 * x2 * x4) + (11 * x2 * x2 * x4) ==
			      -3440)
			    {
			      printf ("I am here at depth 3");
			      if ((-1 * x1 * x3 * x3 * x4) +
				  (2 * x2 * x2 * x2) != -115)
				{
				  printf ("I am here at depth 2");
				  if ((1 * x0 * x1 * x3 * x3 * x4) +
				      (14 * x3 * x3 * x4 * x4 * x4) +
				      (1 * x2 * x2 * x2 * x2) +
				      (1 * x0 * x0 * x1 * x3) +
				      (-1 * x0 * x3 * x3) + (-1 * x2 * x2) ==
				      1382)
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