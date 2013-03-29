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
// x0 = -7
// x1 = 6
// x2 = -1
// x3 = -8
// x4 = 0
// x5 = -8
// x6 = 3
// x7 = 1
// x8 = -5
// x9 = 10
// x10 = 1
// x11 = 8
// x12 = 8
// x13 = 0
// x14 = 9
// x15 = -3
// x16 = 10
// x17 = 9
  if ((2 * x0 * x2 * x8 * x9) + (82 * x10 * x10 * x10 * x14) +
      (-5 * x8 * x8 * x11 * x16) == -9962)
    {
      printf ("I am here at depth 4");
      if ((10 * x2 * x3 * x9 * x14) + (2 * x6 * x6 * x6 * x15) +
	  (1 * x0 * x3 * x15 * x15) + (4 * x1 * x6 * x14) == 8190)
	{
	  printf ("I am here at depth 3");
	  if ((-2 * x1 * x3 * x4 * x11) + (4 * x2 * x5 * x12 * x17) == 2304)
	    {
	      printf ("I am here at depth 2");
	      if ((378 * x0 * x13 * x13 * x13) + (-13 * x0 * x2 * x13 * x14) +
		  (2 * x0 * x8 * x13 * x16) + (3 * x2 * x13 * x16 * x17) +
		  (-9 * x0 * x9 * x14) == 5670)
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
