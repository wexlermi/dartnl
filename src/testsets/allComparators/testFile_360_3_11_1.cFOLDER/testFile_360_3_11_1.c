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
//Possible solution to enter:
// x0 = -8
// x1 = 5
// x2 = 2
// x3 = 8
// x4 = -3
// x5 = -9
// x6 = -9
// x7 = -5
// x8 = 0
// x9 = -4
// x10 = 3
  if ((1 * x8) > -16)
    {
      printf ("I am here at depth 3");
      if ((-3 * x10) != 22)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x9) == -4)
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
