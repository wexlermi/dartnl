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
// x0 = 1
// x1 = 6
// x2 = -10
// x3 = 0
// x4 = -8
// x5 = 3
// x6 = -8
// x7 = 5
// x8 = 4
// x9 = -6
// x10 = 10
// x11 = -7
  if ((3 * x7) == 15)
    {
      printf ("I am here at depth 2");
      if ((-5 * x10) == -50)
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
