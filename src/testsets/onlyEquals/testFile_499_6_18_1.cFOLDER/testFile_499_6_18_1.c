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
// x0 = 5
// x1 = -3
// x2 = -1
// x3 = -8
// x4 = 4
// x5 = -4
// x6 = -4
// x7 = -4
// x8 = -1
// x9 = 0
// x10 = -8
// x11 = -10
// x12 = -1
// x13 = -2
// x14 = 10
// x15 = 4
// x16 = 6
// x17 = -10
  if ((-5 * x2) == 5)
    {
      printf ("I am here at depth 6");
      if ((-6 * x5) == 24)
	{
	  printf ("I am here at depth 5");
	  if ((-21 * x7) == 84)
	    {
	      printf ("I am here at depth 4");
	      if ((-3 * x1) == 9)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x11) == 10)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x10) == 8)
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
