#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 4
// x1 = -4
// x2 = -9
// x3 = 2
  if ((-8 * x0 * x0 * x2) + (-10 * x1 * x1 * x2) + (1 * x0 * x2 * x2) == 2916)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
