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
  int x9;
  int x10;
  int x11;
  int x12;
  int x13;
//Possible solution to enter:
// x0 = 4
// x1 = 8
// x2 = -8
// x3 = 8
// x4 = 4
// x5 = -2
// x6 = 3
// x7 = -9
// x8 = -10
// x9 = 1
// x10 = 1
// x11 = 7
// x12 = -9
// x13 = 0
  if ((1 * x0 * x1 * x2) + (-4 * x0 * x2 * x7) > -1424)
    {
      printf ("I am here at depth 6");
      if ((1 * x5 * x6 * x10) + (-1 * x2 * x2 * x12) + (3 * x2 * x12 * x12) +
	  (-8 * x3 * x7) >= -870)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x4 * x5 * x9) + (2 * x5 * x12 * x12) > -412)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x0 * x0 * x10) + (1 * x4 * x8 * x13) <= 72)
		{
		  printf ("I am here at depth 3");
		  if ((-104 * x5 * x5 * x6) + (-21 * x0 * x10 * x11) +
		      (-11 * x3 * x10 * x12) + (1 * x6 * x10 * x12) +
		      (-1 * x11 * x13) <= -987)
		    {
		      printf ("I am here at depth 2");
		      if ((-2 * x5 * x5 * x5) + (-5 * x1 * x4 * x12) +
			  (-1 * x3 * x9) == 1448)
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