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
// x1 = -10
// x2 = -5
// x3 = 3
// x4 = 3
// x5 = 8
// x6 = -1
// x7 = -2
// x8 = -6
// x9 = 7
  if ((1 * x5) == 8)
    {
      printf ("I am here at depth 6");
      if ((-1 * x7) == 2)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x7) == -2)
	    {
	      printf ("I am here at depth 4");
	      if ((3 * x7) == -6)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x3) == -3)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x8) == 6)
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