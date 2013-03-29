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
//Possible solution to enter:
// x0 = -1
// x1 = -4
// x2 = 0
// x3 = -8
// x4 = -2
// x5 = 9
// x6 = 5
// x7 = 1
// x8 = 6
  if ((18 * x2) > -50)
    {
      printf ("I am here at depth 2");
      if ((2 * x7) == 2)
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
