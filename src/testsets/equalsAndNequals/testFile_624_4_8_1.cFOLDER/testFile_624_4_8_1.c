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
// x0 = 4
// x1 = 2
// x2 = 6
// x3 = 5
// x4 = -1
// x5 = -2
// x6 = 1
// x7 = -1
  if ((3 * x3) != -61)
    {
      printf ("I am here at depth 4");
      if ((-2 * x1) != -67)
	{
	  printf ("I am here at depth 3");
	  if ((42 * x2) != 286)
	    {
	      printf ("I am here at depth 2");
	      if ((2 * x1) == 4)
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
