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
// x1 = 9
// x2 = -2
// x3 = 4
// x4 = 6
// x5 = -3
// x6 = -2
// x7 = -7
// x8 = 0
// x9 = -3
// x10 = -9
// x11 = -8
  if ((1 * x0 * x4 * x8) + (-7 * x3 * x5) != 154)
    {
      printf ("I am here at depth 8");
      if ((3 * x3 * x4 * x5) + (-1 * x1 * x7 * x8) != -250)
	{
	  printf ("I am here at depth 7");
	  if ((3 * x7 * x8 * x9) + (-1 * x0 * x11 * x11) != 78)
	    {
	      printf ("I am here at depth 6");
	      if ((1 * x7 * x7 * x7) + (-2 * x1 * x8 * x9) +
		  (-4 * x6 * x8 * x9) + (1 * x1 * x2) == -361)
		{
		  printf ("I am here at depth 5");
		  if ((-1 * x4 * x6 * x10) != -105)
		    {
		      printf ("I am here at depth 4");
		      if ((2 * x1 * x3 * x3) + (-1 * x0 * x2) != 302)
			{
			  printf ("I am here at depth 3");
			  if ((-21 * x3 * x4 * x11) != 4128)
			    {
			      printf ("I am here at depth 2");
			      if ((-19 * x6 * x8 * x10) == 0)
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