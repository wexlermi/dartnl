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
// x0 = -7
// x1 = -6
// x2 = 5
// x3 = -10
// x4 = -7
// x5 = 0
// x6 = 10
// x7 = 9
// x8 = 0
// x9 = -7
// x10 = -7
// x11 = 8
  if ((-1 * x0 * x6 * x7) + (-2 * x2 * x9 * x9) + (1 * x5 * x8 * x10) == 140)
    {
      printf ("I am here at depth 6");
      if ((-1 * x2 * x2 * x4) + (2 * x1 * x2 * x7) + (15 * x2 * x6 * x7) +
	  (1 * x1 * x6) == 6325)
	{
	  printf ("I am here at depth 5");
	  if ((2 * x0 * x1 * x3) + (1 * x0 * x1 * x5) + (-1 * x2 * x2 * x6) +
	      (-1 * x0 * x7 * x7) + (-1 * x4 * x4 * x9) == -180)
	    {
	      printf ("I am here at depth 4");
	      if ((-2 * x1 * x1 * x4) + (2 * x2 * x7 * x7) +
		  (1 * x6 * x9 * x10) + (-1 * x6 * x10 * x10) +
		  (2 * x6 * x11 * x11) == 2594)
		{
		  printf ("I am here at depth 3");
		  if ((44 * x0 * x1 * x7) + (1 * x0 * x3 * x7) +
		      (-1 * x4 * x4 * x7) + (-39 * x0 * x8 * x9) == 16821)
		    {
		      printf ("I am here at depth 2");
		      if ((3 * x4 * x9) == 147)
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