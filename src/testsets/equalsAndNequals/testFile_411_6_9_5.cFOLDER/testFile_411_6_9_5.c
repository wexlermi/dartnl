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
  int x8;
//Possible solution to enter:
// x0 = -2
// x1 = -4
// x2 = 2
// x3 = -1
// x4 = -9
// x5 = -8
// x6 = -7
// x7 = 2
// x8 = -5
  if ((1 * x0 * x3 * x3 * x4 * x8) + (-38 * x3 * x5 * x5 * x5 * x8) +
      (-1 * x3 * x4 * x4 * x8 * x8) + (7 * x1 * x4 * x6 * x6) +
      (-4 * x0 * x2 * x4 * x7) + (6 * x0 * x2 * x8 * x8) == 110675)
    {
      printf ("I am here at depth 6");
      if ((1 * x0 * x1 * x2 * x3 * x5) + (-1 * x1 * x2 * x5 * x5 * x6) +
	  (-2 * x1 * x4 * x5 * x5 * x6) + (1 * x1 * x1 * x4 * x7) +
	  (1 * x2 * x5 * x7 * x7) != 28424)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x1 * x1 * x2 * x2 * x7) + (1 * x0 * x2 * x5 * x7 * x8) ==
	      -192)
	    {
	      printf ("I am here at depth 4");
	      if ((6 * x0 * x1 * x1 * x1 * x2) != 1493)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x0 * x4 * x4 * x4 * x4) +
		      (-11 * x3 * x3 * x5 * x5 * x6) +
		      (1 * x0 * x1 * x1 * x2 * x7) +
		      (-1 * x1 * x2 * x5 * x6 * x7) == 18818)
		    {
		      printf ("I am here at depth 2");
		      if ((-2 * x0 * x0 * x3 * x4 * x5) == 576)
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
