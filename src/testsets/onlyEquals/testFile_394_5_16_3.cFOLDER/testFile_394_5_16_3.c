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
//Possible solution to enter:
// x0 = -3
// x1 = 9
// x2 = -6
// x3 = -10
// x4 = 0
// x5 = -1
// x6 = -9
// x7 = 7
// x8 = 8
// x9 = -7
// x10 = 2
// x11 = 0
// x12 = -4
// x13 = 3
// x14 = -7
// x15 = 9
  if ((-1 * x2 * x5 * x11) + (3 * x2 * x6 * x13) + (1 * x10 * x12 * x14) +
      (-2 * x5 * x15 * x15) == 704)
    {
      printf ("I am here at depth 5");
      if ((-1 * x1 * x4 * x7) + (-1 * x5 * x5 * x11) + (-1 * x2 * x10 * x15) +
	  (2 * x4 * x10 * x15) + (1 * x12 * x14) == 136)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x4 * x6 * x6) + (-1 * x10 * x10 * x13) == -12)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x4 * x8 * x9) + (-1 * x4 * x8 * x14) + (3 * x0 * x1) ==
		  -81)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x3 * x6 * x7) + (2 * x10 * x10 * x14) +
		      (-1 * x2 * x12 * x14) + (-1 * x7 * x10) == -532)
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
