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
// x0 = -4
// x1 = -5
// x2 = 10
// x3 = 2
// x4 = -9
// x5 = 4
// x6 = 3
// x7 = 7
// x8 = -2
  if ((-1 * x1 * x5) + (-2 * x0 * x7) + (1 * x5 * x8) <= 108)
    {
      printf ("I am here at depth 6");
      if ((-1 * x0 * x2) + (-3 * x2 * x4) > 300)
	{
	  printf ("I am here at depth 5");
	  if ((4 * x4 * x6) > -179)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x2 * x2) + (2 * x3 * x5) + (-1 * x3 * x8) < 171)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x6 * x6) + (-1 * x6 * x8) >= -84)
		    {
		      printf ("I am here at depth 2");
		      if ((-12 * x4 * x4) == -972)
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
