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
// x0 = -4
// x1 = -8
// x2 = -1
// x3 = 5
// x4 = 2
// x5 = -1
// x6 = 2
// x7 = -3
// x8 = -8
// x9 = 5
  if ((3 * x9) != 40)
    {
      printf ("I am here at depth 6");
      if ((-5 * x9) != -78)
	{
	  printf ("I am here at depth 5");
	  if ((3 * x9) == 15)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x2) == 1)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x8) != -101)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x2) != -5)
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
