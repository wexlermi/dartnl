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
// x0 = 8
// x1 = -9
// x2 = -5
// x3 = 6
// x4 = -5
// x5 = -2
// x6 = -6
// x7 = -4
// x8 = 5
// x9 = -5
  if ((1 * x0 * x0 * x2) + (-1 * x2 * x3 * x3) + (1 * x0 * x3 * x9) +
      (-2 * x3 * x4 * x9) == -680)
    {
      printf ("I am here at depth 8");
      if ((2 * x4 * x6 * x8) + (1 * x0 * x1) + (-6 * x4 * x8) > 374)
	{
	  printf ("I am here at depth 7");
	  if ((1 * x0 * x0 * x6) + (-1 * x4 * x4 * x7) + (-1 * x3 * x5 * x8) +
	      (-1 * x5 * x6 * x9) + (-37 * x1 * x6) != -2184)
	    {
	      printf ("I am here at depth 6");
	      if ((3 * x1 * x6) + (22 * x4 * x9) + (-1 * x0) != 659)
		{
		  printf ("I am here at depth 5");
		  if ((-2 * x0 * x0 * x3) + (-4 * x0 * x4 * x5) +
		      (1 * x3 * x3 * x8) + (-1 * x2 * x8) + (-1 * x1 * x9) +
		      (-20 * x8) > -1061)
		    {
		      printf ("I am here at depth 4");
		      if ((1 * x0 * x2 * x5) + (1 * x0 * x0 * x7) +
			  (11 * x0 * x3 * x7) == -2288)
			{
			  printf ("I am here at depth 3");
			  if ((-5 * x3 * x7 * x8) + (3 * x4 * x6) == 690)
			    {
			      printf ("I am here at depth 2");
			      if ((6 * x1 * x4 * x9) + (-4 * x0 * x6) !=
				  -1092)
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
  else
    {
      printf ("I am at the else of depth 8");
    }
}