#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -8
// x1 = 0
// x2 = 5
  if ((1 * x1 * x2 * x2 * x2 * x2) + (-1 * x0 * x2 * x2) + (5 * x0 * x2) == 0)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}