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
//Possible solution to enter:
// x0 = -5
// x1 = 5
// x2 = 9
// x3 = -7
// x4 = -3
// x5 = 1
// x6 = 3
// x7 = -9
// x8 = 1
  if ((2 * x0 * x6 * x8) + (-2 * x3 * x3) + (17 * x3 * x6) + (-2 * x0 * x8) ==
      -475)
    {
      printf ("I am here at depth 8");
      if ((1 * x1 * x3 * x3) + (-9 * x1 * x4 * x4) + (-3 * x5 * x7 * x7) +
	  (-1 * x1 * x8 * x8) + (-2 * x2 * x4) != -397)
	{
	  printf ("I am here at depth 7");
	  if ((1 * x2 * x7 * x7) + (2 * x0 * x7 * x8) != 750)
	    {
	      printf ("I am here at depth 6");
	      if ((-2 * x4 * x6 * x8) + (-12 * x5 * x6 * x8) +
		  (1 * x4 * x8 * x8) + (6 * x0 * x7) + (-15 * x4) == 294)
		{
		  printf ("I am here at depth 5");
		  if ((32 * x1 * x3 * x7) + (1 * x1 * x5 * x7) +
		      (2 * x5 * x7) == 10017)
		    {
		      printf ("I am here at depth 4");
		      if ((-3 * x1 * x6 * x7) + (-4 * x3 * x3) == 209)
			{
			  printf ("I am here at depth 3");
			  if ((4 * x1) != 45)
			    {
			      printf ("I am here at depth 2");
			      if ((2 * x1 * x2 * x3) + (1 * x1 * x1 * x8) +
				  (1 * x2 * x8 * x8) + (-1 * x1 * x7) == -551)
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
