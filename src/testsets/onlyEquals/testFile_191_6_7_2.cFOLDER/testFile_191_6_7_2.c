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
//Possible solution to enter:
// x0 = -4
// x1 = -10
// x2 = -3
// x3 = -9
// x4 = 9
// x5 = 1
// x6 = 3
  if ((2 * x4) == 18)
    {
      printf ("I am here at depth 6");
      if ((-30 * x0 * x4) + (2 * x3 * x4) + (1 * x4 * x6) == 945)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x0 * x3) == 36)
	    {
	      printf ("I am here at depth 4");
	      if ((-9 * x0 * x2) + (4 * x2 * x5) + (3 * x5 * x6) == -111)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x0 * x2) == 12)
		    {
		      printf ("I am here at depth 2");
		      if ((-484 * x0 * x1) + (-1 * x6) == -19363)
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