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
// x0 = -10
// x1 = -3
// x2 = -9
// x3 = 0
// x4 = -2
// x5 = 0
// x6 = 10
// x7 = 7
// x8 = 6
// x9 = -8
  if ((-1 * x1 * x5 * x8 * x9) + (1 * x7 * x7) + (1 * x8 * x9) == 1)
    {
      printf ("I am here at depth 6");
      if ((-1 * x5 * x5 * x5 * x7) + (-1 * x1 * x3 * x5 * x8) +
	  (4 * x4 * x4 * x4 * x9) + (-11 * x0 * x2 * x7) == -6674)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x2 * x3 * x3 * x7) == 0)
	    {
	      printf ("I am here at depth 4");
	      if ((-3 * x3 * x4 * x4 * x6) + (1 * x1 * x2 * x3 * x7) +
		  (-1 * x0 * x8 * x8 * x8) + (-11 * x3 * x8 * x9 * x9) +
		  (-9 * x2 * x4 * x8) + (2 * x7 * x7 * x9) == 404)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x1 * x3 * x5 * x5) + (-1 * x2 * x3 * x3 * x6) +
		      (-8 * x3 * x4 * x9 * x9) + (58 * x3 * x9) == 0)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x1 * x1 * x3 * x3) + (1 * x3 * x5 * x6 * x6) ==
			  0)
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