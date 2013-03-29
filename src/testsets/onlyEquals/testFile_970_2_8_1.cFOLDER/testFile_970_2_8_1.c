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
//Possible solution to enter:
// x0 = 0
// x1 = 2
// x2 = -6
// x3 = -3
// x4 = 2
// x5 = 9
// x6 = -9
// x7 = 1
  if ((-1 * x4) == -2)
    {
      printf ("I am here at depth 2");
      if ((1 * x3) == -3)
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
