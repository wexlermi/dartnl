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
  int x15;
  int x16;
  int x17;
  int x18;
  int x19;
//Possible solution to enter:
// x0 = -7
// x1 = -3
// x2 = 3
// x3 = -5
// x4 = -2
// x5 = -3
// x6 = -1
// x7 = 6
// x8 = -1
// x9 = 9
// x10 = 6
// x11 = 9
// x12 = -1
// x13 = 0
// x14 = 10
// x15 = -1
// x16 = -7
// x17 = 2
// x18 = 5
// x19 = 2
  if ((-8 * x1 * x4 * x17) + (-4 * x10 * x10 * x17) == -384)
    {
      printf ("I am here at depth 6");
      if ((-3 * x1 * x6 * x6) + (1 * x1 * x17 * x17) + (4 * x1 * x15 * x19) ==
	  21)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x7 * x12 * x16) + (-15 * x5 * x19 * x19) == 138)
	    {
	      printf ("I am here at depth 4");
	      if ((2 * x6 * x9 * x12) + (1 * x8 * x11 * x12) +
		  (1 * x8 * x10 * x14) + (-5 * x3 * x14 * x15) +
		  (-1 * x10 * x16 * x16) + (-3 * x3 * x8) == -592)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x5 * x12 * x15) + (1 * x1 * x14) == -33)
		    {
		      printf ("I am here at depth 2");
		      if ((-4 * x11 * x13 * x15) + (-2 * x5 * x8 * x16) +
			  (-4 * x11 * x17 * x18) + (-2 * x1 * x5) == -336)
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