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
// x0 = -6
// x1 = -5
// x2 = 10
// x3 = 9
// x4 = -10
// x5 = -8
// x6 = -9
  if ((-1 * x0 * x0 * x0 * x0 * x3 * x4 * x5 * x6) +
      (1 * x0 * x0 * x4 * x4 * x5 * x6 * x6 * x6) +
      (2 * x1 * x2 * x2 * x2 * x3 * x6 * x6) != 22103374)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
