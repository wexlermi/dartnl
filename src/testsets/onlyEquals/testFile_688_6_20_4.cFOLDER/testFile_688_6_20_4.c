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
// x0 = -1
// x1 = 0
// x2 = 10
// x3 = 2
// x4 = 7
// x5 = 5
// x6 = -4
// x7 = 9
// x8 = 4
// x9 = 6
// x10 = 6
// x11 = 3
// x12 = -10
// x13 = 4
// x14 = -8
// x15 = -3
// x16 = 1
// x17 = 0
// x18 = 2
// x19 = 5
  if ((1 * x3 * x6 * x7 * x8) + (-1 * x1 * x11 * x13 * x14) +
      (-1 * x1 * x10 * x11 * x16) + (1 * x0 * x12 * x17 * x18) +
      (1 * x0 * x8 * x8 * x19) + (1 * x6 * x11) == -380)
    {
      printf ("I am here at depth 6");
      if ((-1 * x0 * x13 * x18 * x18) == 16)
	{
	  printf ("I am here at depth 5");
	  if ((-11 * x0 * x5 * x6 * x13) + (-4 * x1 * x2 * x10 * x13) +
	      (1 * x3 * x7 * x9 * x14) + (-1 * x9 * x10 * x13 * x15) +
	      (-1 * x5 * x10 * x10 * x16) + (-11 * x8 * x14 * x14 * x16) +
	      (-2 * x10 * x12 * x17 * x18) + (1 * x0 * x9 * x17) == -4308)
	    {
	      printf ("I am here at depth 4");
	      if ((8 * x8 * x8 * x8 * x12) + (-1 * x0 * x3 * x10 * x12) +
		  (-1 * x8 * x8 * x11 * x16) + (1 * x0 * x7 * x15 * x16) +
		  (1 * x5 * x8 * x9 * x17) + (-1 * x0 * x1 * x9 * x19) +
		  (36 * x7 * x11 * x14 * x19) + (-4 * x9 * x9 * x15 * x19) ==
		  -41981)
		{
		  printf ("I am here at depth 3");
		  if ((14 * x4 * x4 * x8 * x13) + (-11 * x3 * x6 * x7 * x17) +
		      (-2 * x1 * x1 * x19 * x19) + (1 * x12 * x14 * x18) +
		      (-1 * x7 * x13) == 11100)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x0 * x0 * x2 * x8) +
			  (-5 * x0 * x7 * x10 * x10) +
			  (1 * x3 * x8 * x9 * x13) +
			  (1 * x8 * x11 * x11 * x13) +
			  (-4 * x3 * x6 * x15 * x17) + (-1 * x5 * x7 * x9) +
			  (-4 * x3 * x16 * x17) == 1646)
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
