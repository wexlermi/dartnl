#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 3
// x1 = -5
// x2 = 9
// x3 = -10
  if ((1 * x1) > -19)
    {
      printf ("I am here at depth 2");
      if ((-8 * x3) != 114)
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