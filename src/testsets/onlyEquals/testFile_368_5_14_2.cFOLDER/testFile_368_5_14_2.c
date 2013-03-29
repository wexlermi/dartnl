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
// x0 = 1
// x1 = -9
// x2 = 1
// x3 = -5
// x4 = 10
// x5 = 1
// x6 = -3
// x7 = 5
// x8 = -7
// x9 = -1
// x10 = -7
// x11 = -10
// x12 = 2
// x13 = -4
  if ((49 * x0 * x1) + (1 * x5 * x8) + (12 * 1) == -436)
    {
      printf ("I am here at depth 5");
      if ((2 * x2 * x6) + (-4 * x9 * x12) == 2)
	{
	  printf ("I am here at depth 4");
	  if ((-3 * x1 * x8) == -189)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x7 * x12) == -10)
		{
		  printf ("I am here at depth 2");
		  if ((-4 * x1 * x3) == -180)
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
