#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 10
// x1 = -9
// x2 = -4
// x3 = -9
// x4 = 7
  if ((1 * x0 * x2) + (1 * x1 * x3) > 29)
    {
      printf ("I am here at depth 2");
      if ((-16 * x1 * x3) + (-1 * x4 * x4) + (-2 * x2) >= -1376)
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
