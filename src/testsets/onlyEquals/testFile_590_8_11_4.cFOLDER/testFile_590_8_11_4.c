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
//Possible solution to enter:
// x0 = -4
// x1 = 4
// x2 = 4
// x3 = 0
// x4 = 1
// x5 = 0
// x6 = 1
// x7 = 3
// x8 = -5
// x9 = 2
// x10 = 0
  if ((-40 * x2 * x2 * x7 * x8) + (-71 * x4 * x7 * x9 * x9) +
      (1 * x3 * x4 * x10 * x10) + (-5 * x0 * x3 * x3) + (-1 * x2 * x2 * x4) +
      (-3 * x2 * x6 * x9) == 8708)
    {
      printf ("I am here at depth 8");
      if ((-4 * x0 * x2 * x2 * x3) + (1 * x0 * x1 * x2 * x8) +
	  (-1 * x1 * x4 * x8 * x9) + (2 * x3 * x8 * x9 * x10) +
	  (1 * x2 * x2 * x10 * x10) + (5 * x9 * x9) == 380)
	{
	  printf ("I am here at depth 7");
	  if ((1 * x0 * x1 * x1 * x6) + (-2 * x1 * x5 * x6 * x10) +
	      (-1 * x3 * x6 * x7) + (-24 * x3 * x6) == -64)
	    {
	      printf ("I am here at depth 6");
	      if ((1 * x0 * x2 * x6 * x6) + (5 * x4 * x4 * x7 * x9) +
		  (9 * x2 * x6 * x7 * x10) + (1 * x9 * x10) == 14)
		{
		  printf ("I am here at depth 5");
		  if ((5 * x4 * x4 * x6 * x7) + (-1 * x6 * x7 * x7 * x10) +
		      (3 * x2 * x4 * x9 * x10) == 15)
		    {
		      printf ("I am here at depth 4");
		      if ((7 * x0 * x6 * x9 * x9) == -112)
			{
			  printf ("I am here at depth 3");
			  if ((-3 * x2 * x3 * x4 * x7) +
			      (-2 * x3 * x6 * x6 * x9) +
			      (-69 * x1 * x4 * x10 * x10) +
			      (4 * x4 * x5 * x10 * x10) +
			      (1 * x0 * x3 * x3) == 0)
			    {
			      printf ("I am here at depth 2");
			      if ((1 * x2 * x6 * x6 * x6) +
				  (1 * x0 * x3 * x3 * x7) +
				  (-2 * x1 * x6 * x8 * x8) +
				  (1 * x0 * x0 * x0 * x10) +
				  (1 * x1 * x2 * x4) == -180)
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
