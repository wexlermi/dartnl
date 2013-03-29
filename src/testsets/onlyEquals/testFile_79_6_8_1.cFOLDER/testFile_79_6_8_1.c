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
//Possible solution to enter:
// x0 = -8
// x1 = 9
// x2 = 10
// x3 = -2
// x4 = 5
// x5 = 6
// x6 = 5
// x7 = -10
  if ((-3 * 1) == -3)
    {
      printf ("I am here at depth 6");
      if ((-2 * 1) == -2)
	{
	  printf ("I am here at depth 5");
	  if ((-3 * x6) == -15)
	    {
	      printf ("I am here at depth 4");
	      if ((2 * x5) == 12)
		{
		  printf ("I am here at depth 3");
		  if ((8 * x7) == -80)
		    {
		      printf ("I am here at depth 2");
		      if ((3 * x4) == 15)
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
