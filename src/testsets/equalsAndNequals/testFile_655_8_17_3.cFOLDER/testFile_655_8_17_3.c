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
  int x12;
  int x13;
  int x14;
  int x15;
  int x16;
//Possible solution to enter:
// x0 = 1
// x1 = 8
// x2 = -9
// x3 = 7
// x4 = -6
// x5 = -8
// x6 = -3
// x7 = -2
// x8 = 2
// x9 = 3
// x10 = 9
// x11 = 9
// x12 = 5
// x13 = -2
// x14 = -9
// x15 = -6
// x16 = 4
  if ((8 * x6 * x7 * x16) != 202)
    {
      printf ("I am here at depth 8");
      if ((1 * x1 * x7 * x15) + (5 * x2 * x11 * x16) + (1 * x13 * x16 * x16) +
	  (1 * x4 * x12) != -1674)
	{
	  printf ("I am here at depth 7");
	  if ((-2 * x5 * x10 * x12) + (-1 * x9 * x12 * x13) == 750)
	    {
	      printf ("I am here at depth 6");
	      if ((2 * x0 * x2 * x9) + (-1 * x3 * x5 * x15) == -390)
		{
		  printf ("I am here at depth 5");
		  if ((3 * x1 * x2 * x3) + (-2 * x12 * x14 * x15) +
		      (8 * x2 * x5 * x16) + (1 * x4 * x10 * x16) == 36)
		    {
		      printf ("I am here at depth 4");
		      if ((5 * x2 * x6 * x11) == 1215)
			{
			  printf ("I am here at depth 3");
			  if ((1 * x0 * x1 * x13) + (-1 * x5 * x11 * x15) ==
			      -448)
			    {
			      printf ("I am here at depth 2");
			      if ((-8 * x14 * x14 * x14) +
				  (-1 * x5 * x5 * x15) +
				  (-1 * x1 * x14 * x15) + (3 * x3 * x14) ==
				  5595)
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
