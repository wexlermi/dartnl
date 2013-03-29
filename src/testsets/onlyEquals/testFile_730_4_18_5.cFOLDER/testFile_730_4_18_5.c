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
//Possible solution to enter:
// x0 = 0
// x1 = 6
// x2 = 6
// x3 = -6
// x4 = 9
// x5 = 8
// x6 = -2
// x7 = -4
// x8 = -7
// x9 = -7
// x10 = -7
// x11 = 3
// x12 = -10
// x13 = 5
// x14 = -2
// x15 = 9
// x16 = -10
// x17 = 5
  if ((-2 * x6 * x7 * x7 * x7 * x12) + (3 * x7 * x11 * x13 * x13 * x13) +
      (-1 * x8 * x9 * x11 * x16) + (-1 * x2 * x11 * x15 * x16) == 1150)
    {
      printf ("I am here at depth 4");
      if ((2 * x12 * x12 * x14 * x14 * x14) + (4 * x2 * x6 * x9 * x10 * x15) +
	  (-1 * x0 * x2 * x10 * x15 * x16) + (1 * x6 * x8 * x9 * x17) ==
	  -23258)
	{
	  printf ("I am here at depth 3");
	  if ((43 * x2 * x3 * x5 * x6 * x9) + (1 * x4 * x4 * x6 * x6 * x12) +
	      (1 * x0 * x1 * x5 * x12 * x16) +
	      (-1 * x6 * x8 * x12 * x13 * x17) == -173116)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x4 * x5 * x5 * x9 * x9) +
		  (1 * x2 * x5 * x8 * x10 * x10) +
		  (1 * x6 * x6 * x6 * x9 * x11) +
		  (-1 * x2 * x4 * x9 * x12 * x12) +
		  (-1 * x0 * x10 * x11 * x14 * x14) +
		  (1 * x5 * x10 * x13 * x13 * x15) +
		  (-1 * x2 * x2 * x4 * x8 * x16) +
		  (1 * x12 * x12 * x14 * x17 * x17) +
		  (-1 * x5 * x8 * x12 * x15) == -52040)
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
