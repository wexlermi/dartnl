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
  int x14;
//Possible solution to enter:
// x0 = -7
// x1 = 3
// x2 = 3
// x3 = 5
// x4 = -4
// x5 = -8
// x6 = -6
// x7 = -5
// x8 = 3
// x9 = 8
// x10 = 6
// x11 = 8
// x12 = 4
// x13 = 9
// x14 = 4
  if ((-1 * x0 * x8 * x10 * x10) + (1 * x0 * x0 * x5 * x11) +
      (-1 * x3 * x4 * x4 * x12) + (1 * x8 * x10 * x13 * x13) == -1242)
    {
      printf ("I am here at depth 5");
      if ((-2 * x0 * x6 * x6 * x6) + (-4 * x6 * x8 * x8 * x8) +
	  (-1 * x6 * x8 * x8 * x11) + (-4 * x8 * x8 * x13 * x13) +
	  (-2 * x4 * x6 * x6 * x14) + (1 * x2 * x3 * x8) +
	  (-1 * x6 * x9 * x9) + (2 * x1 * x5) == -3327)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x4 * x4 * x9) + (-1 * x1 * x4 * x6 * x9) +
	      (1 * x2 * x8 * x11 * x11) + (-3 * x1 * x9 * x12 * x13) +
	      (-3 * x2 * x12 * x12 * x14) == -4064)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x0 * x0 * x5 * x5) + (-3 * x0 * x3 * x4 * x12) +
		  (2 * x1 * x2 * x6 * x13) + (1 * x3 * x5 * x7) == 684)
		{
		  printf ("I am here at depth 2");
		  if ((-9 * x1 * x7 * x9 * x14) + (89 * x4 * x4 * x12 * x14) +
		      (-3 * x0 * x7 * x10) == 26474)
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
