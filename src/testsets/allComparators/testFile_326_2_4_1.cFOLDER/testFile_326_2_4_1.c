#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -2
// x1 = 8
// x2 = -4
// x3 = 10
  if ((2 * 1) >= -16)
    {
      printf ("I am here at depth 2");
      if ((-1 * 1) > -6)
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