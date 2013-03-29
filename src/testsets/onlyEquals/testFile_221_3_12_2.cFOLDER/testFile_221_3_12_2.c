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
//Possible solution to enter:
// x0 = -8
// x1 = 1
// x2 = 6
// x3 = -4
// x4 = 4
// x5 = 1
// x6 = 9
// x7 = 1
// x8 = 4
// x9 = -9
// x10 = -5
// x11 = -2
  if ((-2 * x1 * x8) + (1 * x5 * x8) == -4)
    {
      printf ("I am here at depth 3");
      if ((5 * x1 * x2) + (4 * x11) == 22)
	{
	  printf ("I am here at depth 2");
	  if ((2 * x9 * x10) == 90)
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
