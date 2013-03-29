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
// x0 = -9
// x1 = 7
// x2 = 10
// x3 = 6
// x4 = 2
// x5 = -2
// x6 = -8
// x7 = 2
// x8 = 8
// x9 = 2
// x10 = -8
// x11 = -10
// x12 = 2
// x13 = 5
// x14 = 9
// x15 = 1
// x16 = -6
// x17 = -10
  if ((1 * x1 * x4 * x4 * x9) + (-1 * x1 * x1 * x5 * x10) +
      (1 * x9 * x12 * x13 * x13) + (-7 * x0 * x2 * x9 * x15) +
      (-8 * x1 * x1 * x3 * x16) + (1 * x5 * x8 * x14 * x17) == 16184)
    {
      printf ("I am here at depth 7");
      if ((-1 * x6 * x7 * x10 * x11) + (1 * x6 * x12 * x13 * x13) +
	  (-2 * x7 * x8 * x11 * x16) + (-25 * x9 * x9 * x9 * x17) +
	  (-310 * x7 * x10 * x17) == -48640)
	{
	  printf ("I am here at depth 6");
	  if ((2 * x0 * x7 * x8 * x12) + (-4 * x4 * x4 * x7 * x14) +
	      (1 * x6 * x6 * x9 * x16) + (-5 * x5 * x11 * x14 * x16) +
	      (1 * x6 * x10 * x13 * x17) + (-1 * x12 * x16 * x16 * x17) +
	      (1 * x15 * x16 * x16 * x17) == 928)
	    {
	      printf ("I am here at depth 5");
	      if ((-4 * x2 * x3 * x11 * x11) + (4 * x0 * x6 * x13 * x13) ==
		  -16800)
		{
		  printf ("I am here at depth 4");
		  if ((-1 * x3 * x6 * x11 * x13) +
		      (-1 * x3 * x8 * x14 * x16) + (-3 * x1 * x2 * x6 * x17) +
		      (1 * x0 * x1 * x10) == -16104)
		    {
		      printf ("I am here at depth 3");
		      if ((-2 * x7 * x10 * x10 * x14) +
			  (1 * x1 * x8 * x9 * x16) +
			  (-1 * x0 * x3 * x11 * x16) +
			  (-1 * x1 * x8 * x15 * x16) +
			  (4 * x4 * x13 * x16 * x17) == 3000)
			{
			  printf ("I am here at depth 2");
			  if ((1 * x3 * x5 * x6 * x10) +
			      (-4 * x1 * x13 * x14 * x14) +
			      (-115 * x1 * x10 * x13 * x16) == -205308)
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
  else
    {
      printf ("I am at the else of depth 7");
    }
}
