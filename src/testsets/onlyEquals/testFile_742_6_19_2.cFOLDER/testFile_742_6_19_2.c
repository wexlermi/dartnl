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
// x0 = 1
// x1 = 9
// x2 = -7
// x3 = -1
// x4 = 3
// x5 = -3
// x6 = 10
// x7 = -9
// x8 = 3
// x9 = -1
// x10 = -9
// x11 = 0
// x12 = 2
// x13 = -9
// x14 = -7
// x15 = 5
// x16 = -9
// x17 = 2
// x18 = 2
  if ((1 * x1 * x4) == 27)
    {
      printf ("I am here at depth 6");
      if ((1 * x1 * x6) + (1 * x11 * x18) == 90)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x3 * x6) + (-2 * x12) == -14)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x1 * x3) == 9)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x10 * x10) + (-8 * x6 * x12) == -79)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x4 * x13) + (-1 * x10 * x15) +
			  (-1 * x13 * x15) == 63)
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