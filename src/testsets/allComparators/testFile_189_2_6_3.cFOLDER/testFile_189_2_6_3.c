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
//Possible solution to enter:
// x0 = 10
// x1 = 9
// x2 = -7
// x3 = -5
// x4 = 1
// x5 = 1
  if ((-2 * x0 * x2 * x3) + (-12 * x2 * x4 * x4) + (1 * x1 * x3 * x5) != -701)
    {
      printf ("I am here at depth 2");
      if ((3 * x2 * x2 * x3) + (4 * x5 * x5 * x5) + (1 * x0 * x4) == -721)
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