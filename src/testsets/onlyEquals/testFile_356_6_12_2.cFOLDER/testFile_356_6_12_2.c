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
  int x10;
  int x11;
//Possible solution to enter:
// x0 = -2
// x1 = -2
// x2 = -4
// x3 = -3
// x4 = 2
// x5 = 2
// x6 = -1
// x7 = -7
// x8 = -4
// x9 = -8
// x10 = -10
// x11 = 1
  if ((-3 * x5 * x8) == 24)
    {
      printf ("I am here at depth 6");
      if ((4 * x2 * x9) + (4 * x4) == 136)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x1 * x9) + (-1 * x7) == 23)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x2 * x10) + (-2 * x4 * x10) == 0)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x0 * x1) + (-1 * x1 * x9) == -20)
		    {
		      printf ("I am here at depth 2");
		      if ((31 * x0 * x8) == 248)
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
      else
	{
	  printf ("I am at the else of depth 5");
	}
    }
  else
    {
      printf ("I am at the else of depth 6");
    }
}