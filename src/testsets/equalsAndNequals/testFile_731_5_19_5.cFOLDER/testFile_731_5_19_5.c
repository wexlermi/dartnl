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
//Possible solution to enter:
// x0 = -2
// x1 = -7
// x2 = 6
// x3 = 10
// x4 = 5
// x5 = -10
// x6 = -1
// x7 = -7
// x8 = 6
// x9 = -3
// x10 = -4
// x11 = -1
// x12 = -8
// x13 = 8
// x14 = 5
// x15 = 1
// x16 = 2
// x17 = -2
// x18 = 7
  if ((4 * x4 * x7 * x9 * x11 * x12) + (-1 * x1 * x1 * x10 * x11 * x14) +
      (-1 * x3 * x5 * x6 * x10 * x15) + (-2 * x2 * x3 * x12 * x16 * x16) +
      (-11 * x7 * x11 * x12 * x13 * x17) + (1 * x7 * x10 * x17 * x17 * x18) +
      (1 * x5 * x8 * x13 * x18 * x18) + (1 * x1 * x14 * x18 * x18) == -27687)
    {
      printf ("I am here at depth 5");
      if ((1 * x0 * x5 * x6 * x6 * x8) + (1 * x1 * x3 * x12 * x13 * x15) +
	  (-2 * x2 * x5 * x5 * x12 * x16) + (-1 * x0 * x2 * x4 * x12 * x17) +
	  (1 * x0 * x1 * x17 * x17 * x17) +
	  (-4 * x4 * x10 * x16 * x18 * x18) == 32488)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x2 * x2 * x4 * x6 * x7) + (2 * x2 * x2 * x2 * x9 * x11) +
	      (-1 * x1 * x7 * x7 * x9 * x11) +
	      (2 * x0 * x1 * x5 * x11 * x12) +
	      (-1 * x6 * x6 * x9 * x11 * x12) +
	      (2 * x5 * x5 * x7 * x12 * x13) + (2 * x2 * x6 * x9 * x9 * x16) +
	      (-5 * x5 * x5 * x8 * x11 * x16) +
	      (1 * x6 * x6 * x9 * x13 * x17) + (1 * x0 * x5 * x8 * x17) ==
	      96561)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x2 * x4 * x5 * x7 * x13) +
		  (-1 * x1 * x5 * x5 * x6 * x16) == 15400)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x2 * x2 * x2 * x6 * x10) +
		      (-1 * x1 * x6 * x7 * x11 * x17) == -766)
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
