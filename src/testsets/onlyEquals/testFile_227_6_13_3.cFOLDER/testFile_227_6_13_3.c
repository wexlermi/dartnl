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
//Possible solution to enter:
// x0 = -1
// x1 = -8
// x2 = -2
// x3 = 1
// x4 = 6
// x5 = -3
// x6 = 3
// x7 = 1
// x8 = 7
// x9 = 10
// x10 = -9
// x11 = 3
// x12 = 8
  if ((-3 * x3 * x4 * x5) + (-1 * x0 * x2 * x9) + (-1 * x4 * x7 * x9) +
      (3 * x1 * x11 * x12) == -602)
    {
      printf ("I am here at depth 6");
      if ((20 * x2 * x2 * x7) + (1 * x8 * x8 * x10) == -361)
	{
	  printf ("I am here at depth 5");
	  if ((-15 * x2 * x2 * x5) == 180)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x1 * x3 * x8) + (-6 * x5 * x8 * x11) == 322)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x6 * x6 * x6) + (-17 * x0 * x10 * x10) +
		      (11 * x3 * x6 * x11) + (-1 * x0 * x9 * x12) +
		      (-1 * x8 * x12 * x12) == 1135)
		    {
		      printf ("I am here at depth 2");
		      if ((-41 * x1 * x1 * x8) + (-4 * x0 * x8 * x8) ==
			  -18172)
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
