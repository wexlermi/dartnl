#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -3
// x1 = -5
// x2 = 7
// x3 = 3
  if ((-1 * x0 * x1 * x1 * x2 * x3) + (1 * x0 * x0 * x0 * x3 * x3) +
      (3 * x0 * x2 * x3 * x3 * x3) + (-3 * x0 * x0 * x0 * x2) +
      (17 * x0 * x1 * x2 * x3) + (1 * x0 * x1 * x3 * x3) +
      (-3 * x2 * x2 * x3) + (1 * x1) < 5312)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
