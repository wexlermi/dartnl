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
// x0 = -3
// x1 = 2
// x2 = 0
// x3 = 6
// x4 = 6
// x5 = 5
// x6 = -3
// x7 = 4
  if ((-2 * x2 * x2 * x3 * x6 * x6) + (1 * x5 * x5 * x7) == 100)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x1 * x3 * x3 * x3) + (1 * x0 * x0 * x2 * x4 * x4) +
	  (1 * x1 * x3 * x6 * x6 * x7) != -886)
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
