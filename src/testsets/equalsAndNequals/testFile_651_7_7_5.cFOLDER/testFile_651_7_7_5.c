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
// x0 = 7
// x1 = -9
// x2 = -7
// x3 = -8
// x4 = 5
// x5 = -2
// x6 = -6
  if ((-1 * x1 * x3 * x3 * x5 * x6) + (6 * x0 * x0 * x0 * x1) +
      (-1 * x0 * x1 * x1 * x2) + (6 * x2 * x2 * x3 * x5) +
      (2 * x2 * x2 * x3) + (3 * x1 * x3 * x6) == -5017)
    {
      printf ("I am here at depth 7");
      if ((-1 * x2 * x3 * x3 * x3 * x3) + (1 * x2 * x2 * x2 * x3 * x4) +
	  (6 * x0 * x2 * x3 * x3 * x4) + (-2 * x3 * x3 * x3 * x3 * x5) +
	  (-1 * x0 * x0 * x1 * x3 * x6) + (-1 * x0 * x1 * x5 * x6 * x6) +
	  (2 * x2 * x5 * x5 * x6 * x6) + (1 * x3 * x4) != -20724)
	{
	  printf ("I am here at depth 6");
	  if ((2 * x1 * x2 * x2 * x2 * x2) + (2 * x0 * x0 * x0 * x0 * x4) +
	      (-2 * x2 * x2 * x2 * x2 * x5) + (-3 * x1 * x3 * x3 * x4) +
	      (5 * x0 * x3 * x3 * x5) == -5444)
	    {
	      printf ("I am here at depth 5");
	      if ((2 * x1 * x1 * x2 * x3 * x4) +
		  (3 * x2 * x3 * x4 * x4 * x4) +
		  (-2 * x0 * x0 * x0 * x5 * x5) +
		  (-1 * x1 * x3 * x3 * x3 * x6) +
		  (1 * x2 * x2 * x5 * x5 * x6) +
		  (-2 * x1 * x4 * x5 * x5 * x6) + (2 * x1 * x1 * x3 * x5) !=
		  90519)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x0 * x0 * x1 * x4 * x4) +
		      (-2 * x0 * x1 * x1 * x1 * x5) +
		      (2 * x1 * x3 * x3 * x3 * x5) +
		      (2 * x3 * x3 * x3 * x3 * x6) +
		      (-1 * x0 * x2 * x5 * x6) + (1 * x2 * x6 * x6 * x6) +
		      (-1 * x2 * x3) != -96881)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x1 * x1 * x1 * x1 * x4) +
			  (-7 * x0 * x0 * x0 * x0 * x5) +
			  (-1 * x1 * x1 * x2 * x3 * x5) +
			  (-1 * x1 * x2 * x5 * x5 * x5) +
			  (1 * x0 * x0 * x2 * x2 * x6) +
			  (1 * x2 * x2 * x3 * x3 * x6) +
			  (1 * x0 * x4 * x5 * x5 * x6) +
			  (1 * x1 * x2 * x2 * x6) + (-2 * x2 * x4 * x6 * x6) +
			  (1 * x2 * x5 * x6) + (1 * x0 * x6 * x6) != -18252)
			{
			  printf ("I am here at depth 2");
			  if ((1 * x1 * x2 * x2 * x3 * x3) +
			      (-8 * x0 * x2 * x3 * x3 * x3) +
			      (-1 * x0 * x2 * x3 * x3 * x6) +
			      (-1 * x4 * x4 * x6 * x6) + (1 * x0 * x0) !=
			      -248644)
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