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
  int x7;
//Possible solution to enter:
// x0 = -4
// x1 = 5
// x2 = -8
// x3 = -5
// x4 = 8
// x5 = -10
// x6 = -5
// x7 = -4
  if ((3 * x0 * x1 * x3 * x5) + (-1 * x1 * x1 * x5 * x5) +
      (1 * x2 * x2 * x5 * x7) + (1 * x3 * x6 * x6 * x7) + (4 * x2) == -2472)
    {
      printf ("I am here at depth 6");
      if ((-1 * x1 * x4 * x4 * x7) + (2 * x0 * x1 * x5) == 1680)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x3 * x3 * x6 * x7) == -500)
	    {
	      printf ("I am here at depth 4");
	      if ((2 * x0 * x1 * x3 * x3) + (2 * x3 * x4 * x6 * x6) +
		  (-1 * x2 * x3 * x3 * x7) + (-1 * x4 * x4 * x4 * x7) +
		  (1 * x0 * x3 * x5 * x7) + (1 * x3 * x3 * x4) == -752)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x2 * x2 * x3 * x4) + (2 * x2 * x3 * x4 * x5) +
		      (22 * x0 * x3 * x5 * x5) + (-2 * x1 * x3 * x3 * x6) +
		      (-5 * x0 * x7 * x7) == 41730)
		    {
		      printf ("I am here at depth 2");
		      if ((2 * x1 * x2) != -131)
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