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
// x0 = -6
// x1 = 2
// x2 = -5
// x3 = -1
// x4 = -1
  if ((7 * x0 * x2 * x4 * x4) >= 173)
    {
      printf ("I am here at depth 3");
      if ((-5 * x1 * x3 * x4 * x4) + (-158 * x0 * x1 * x4) >= -1920)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x0 * x0 * x1 * x3) + (-1 * x0 * x3 * x3 * x3) +
	      (1 * x1 * x2 * x2 * x4) != 50)
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
  else
    {
      printf ("I am at the else of depth 3");
    }
}