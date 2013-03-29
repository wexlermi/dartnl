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
// x0 = -4
// x1 = 2
// x2 = -7
// x3 = -6
// x4 = 9
// x5 = 1
// x6 = -4
// x7 = 3
// x8 = -2
// x9 = -2
  if ((-2 * x3 * x3 * x7 * x8) + (-1 * x1 * x8) == 436)
    {
      printf ("I am here at depth 5");
      if ((-3 * x0 * x1 * x6 * x7) + (-4 * x1 * x4 * x7 * x9) +
	  (2 * x6 * x7 * x7 * x9) + (-4 * x0 * x0 * x3) == 672)
	{
	  printf ("I am here at depth 4");
	  if ((-27 * x1 * x1 * x2 * x3) + (2 * x1 * x4 * x6 * x6) +
	      (-4 * x0 * x5 * x5 * x7) + (2 * x1 * x5 * x7 * x7) +
	      (-2 * x4 * x4 * x5 * x8) + (-16 * x2 * x2 * x2 * x9) +
	      (-1 * x0 * x0 * x4 * x9) + (13 * x6 * x7 * x9) != -13840)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x2 * x2 * x4 * x6) + (-3 * x4 * x4 * x6 * x6) +
		  (-3 * x4 * x7 * x7 * x7) != -6419)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x2 * x3 * x5 * x5) + (2 * x0 * x0 * x5 * x8) +
		      (-1 * x2 * x7 * x7 * x8) + (-2 * x2 * x2 * x2 * x9) +
		      (-1 * x4 * x4 * x5 * x9) + (1 * x6 * x8 * x9 * x9) +
		      (1 * x2 * x4 * x7) + (-2 * x3 * x3) + (1 * x2 * x8) ==
		      -1573)
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
