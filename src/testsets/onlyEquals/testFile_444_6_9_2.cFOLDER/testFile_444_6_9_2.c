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
// x0 = 1
// x1 = -5
// x2 = 5
// x3 = -4
// x4 = 9
// x5 = 4
// x6 = 7
// x7 = 10
// x8 = -7
  if ((-1 * x0 * x7) + (-1 * x2 * x8) + (2 * x1) == 15)
    {
      printf ("I am here at depth 6");
      if ((1 * x3 * x7) == -40)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x1) == 5)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x1 * x4) + (1 * x1 * x6) == -80)
		{
		  printf ("I am here at depth 3");
		  if ((2 * x4 * x8) + (2 * x6) == -112)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x2 * x3) + (-1 * x5 * x8) + (103 * x8 * x8) ==
			  5055)
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