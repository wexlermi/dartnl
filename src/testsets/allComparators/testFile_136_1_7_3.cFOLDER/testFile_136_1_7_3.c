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
// x1 = -9
// x2 = 3
// x3 = -9
// x4 = -2
// x5 = -7
// x6 = -1
  if ((-2 * x0 * x2 * x3) + (-1 * x0 * x1 * x4) + (2 * x0 * x1 * x5) +
      (-1 * x2 * x3) + (1 * x1 * x6) <= 438)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
