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
//Possible solution to enter:
// x0 = 2
// x1 = 4
// x2 = 8
// x3 = -4
// x4 = -2
// x5 = 4
// x6 = 9
  if ((-6 * 1) >= -15)
    {
      printf ("I am here at depth 2");
      if ((3 * x2) >= -16)
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
