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
// x0 = 0
// x1 = 0
// x2 = 3
// x3 = -3
// x4 = 8
// x5 = -10
// x6 = -10
// x7 = 0
// x8 = 4
// x9 = 5
// x10 = -10
// x11 = 3
  if ((1 * x1 * x4 * x4 * x8) + (-1 * x1 * x2 * x8 * x8) +
      (1 * x2 * x2 * x8 * x9) + (-2 * x3 * x6 * x6 * x10) +
      (3 * x1 * x2 * x10 * x10) + (-1 * x0 * x3 * x10 * x10) +
      (-2 * x8 * x8 * x10) == -5500)
    {
      printf ("I am here at depth 7");
      if ((-13 * x2 * x5 * x9 * x9) < 9752)
	{
	  printf ("I am here at depth 6");
	  if ((-7 * x3 * x5 * x9 * x10) > 10480)
	    {
	      printf ("I am here at depth 5");
	      if ((27 * x4 * x7 * x9 * x9) + (50 * x1 * x8 * x9 * x9) <= 35)
		{
		  printf ("I am here at depth 4");
		  if ((-4 * x0 * x5 * x5 * x5) + (2 * x5 * x5 * x7 * x7) +
		      (1 * x0 * x1 * x6 * x8) + (2 * x2 * x3 * x6 * x8) +
		      (1 * x3 * x3 * x11) >= 680)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x3 * x7 * x8 * x11) +
			  (-3 * x5 * x9 * x10 * x11) + (8 * x4 * x7 * x8) +
			  (1 * x6 * x10) >= -4487)
			{
			  printf ("I am here at depth 2");
			  if ((1 * x5 * x6 * x7 * x10) +
			      (1 * x2 * x4 * x8 * x10) + (5 * x5 * x5 * x6) +
			      (1 * x5 * x10 * x10) <= -6949)
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
  else
    {
      printf ("I am at the else of depth 7");
    }
}
