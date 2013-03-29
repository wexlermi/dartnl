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
//Possible solution to enter:
// x0 = -3
// x1 = -1
// x2 = -2
// x3 = 5
// x4 = 3
// x5 = -1
// x6 = -1
// x7 = 1
// x8 = -6
// x9 = -3
  if ((-2 * x3 * x8) != 104)
    {
      printf ("I am here at depth 2");
      if ((-2 * x3 * x3) + (1 * x5 * x7) + (2 * x7) == -49)
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
