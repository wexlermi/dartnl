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
// x0 = -9
// x1 = 0
// x2 = 8
// x3 = 6
// x4 = 4
// x5 = -6
// x6 = -5
// x7 = 6
// x8 = -3
// x9 = 8
// x10 = -9
// x11 = 9
// x12 = -10
  if ((1 * x5 * x11) + (-1 * x11 * x12) != -14)
    {
      printf ("I am here at depth 3");
      if ((1 * x2 * x12) != -131)
	{
	  printf ("I am here at depth 2");
	  if ((-195 * x0 * x6) + (1 * x4 * x10) == -8811)
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