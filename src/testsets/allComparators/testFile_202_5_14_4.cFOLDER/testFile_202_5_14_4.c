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
// x0 = 9
// x1 = -1
// x2 = 0
// x3 = 4
// x4 = 5
// x5 = 10
// x6 = -9
// x7 = 0
// x8 = 8
// x9 = -4
// x10 = 10
// x11 = 10
// x12 = -3
// x13 = 6
  if ((2 * x5 * x8 * x8 * x11) + (1 * x1 * x7 * x12 * x12) +
      (1 * x0 * x12 * x12 * x13) + (4 * x0 * x0 * x0) + (-5 * x3 * x7 * x12) +
      (3 * x9 * x9 * x12) < 16078)
    {
      printf ("I am here at depth 5");
      if ((1 * x0 * x1 * x6 * x9) + (-22 * x1 * x10 * x10 * x10) +
	  (5 * x1 * x5 * x8 * x11) + (1 * x6 * x8 * x8 * x11) +
	  (50 * x3 * x10 * x11 * x11) + (-9 * x3 * x3 * x11 * x12) +
	  (9 * x1 * x3 * x12 * x12) + (1 * x6 * x9 * x13 * x13) +
	  (1 * x7 * x11 * x13 * x13) < 217277)
	{
	  printf ("I am here at depth 4");
	  if ((-3 * x0 * x0 * x0 * x7) + (1 * x3 * x3 * x5 * x9) +
	      (1 * x3 * x5 * x10 * x13) + (-1 * x3 * x7 * x13 * x13) +
	      (3 * x4 * x4 * x7) + (-1 * x11 * x12 * x13) + (-1 * x5 * x8) !=
	      1774)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x0 * x2 * x6 * x7) + (25 * x0 * x4 * x9 * x10) +
		  (1 * x1 * x9 * x10 * x10) + (1 * x6 * x8 * x8 * x11) +
		  (-1 * x9 * x10 * x13 * x13) != -48968)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x1 * x3 * x3 * x11) == -160)
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