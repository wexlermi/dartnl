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
  int x8;
  int x9;
//Possible solution to enter:
// x0 = 5
// x1 = -2
// x2 = 3
// x3 = 7
// x4 = 7
// x5 = -9
// x6 = -3
// x7 = 8
// x8 = -1
// x9 = 9
  if ((-3 * x5 * x5) == -243)
    {
      printf ("I am here at depth 4");
      if ((4 * x0 * x2) + (4 * x4 * x7) + (2 * x7 * x9) == 428)
	{
	  printf ("I am here at depth 3");
	  if ((-2 * x3 * x3) == -98)
	    {
	      printf ("I am here at depth 2");
	      if ((-2 * x8 * x9) + (1 * x0) == 23)
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
  else
    {
      printf ("I am at the else of depth 4");
    }
}
