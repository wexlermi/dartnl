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
// x0 = -9
// x1 = -6
// x2 = -2
// x3 = -6
// x4 = -10
// x5 = -10
// x6 = -8
// x7 = -6
// x8 = -1
// x9 = 9
// x10 = -9
  if ((1 * x1 * x6) == 48)
    {
      printf ("I am here at depth 2");
      if ((1 * x5 * x6) == 80)
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
