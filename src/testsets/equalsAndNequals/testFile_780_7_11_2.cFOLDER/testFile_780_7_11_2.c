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
// x0 = -9
// x1 = 8
// x2 = -1
// x3 = -1
// x4 = 0
// x5 = 1
// x6 = 4
// x7 = 10
// x8 = 1
// x9 = 0
// x10 = -6
  if ((-6 * x1 * x2) + (-1 * x0 * x8) != 113)
    {
      printf ("I am here at depth 7");
      if ((4 * x1 * x2) != -72)
	{
	  printf ("I am here at depth 6");
	  if ((-1 * x3 * x8) == 1)
	    {
	      printf ("I am here at depth 5");
	      if ((1 * x7 * x10) != -105)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x0 * x10) + (-1 * x3 * x10) == 48)
		    {
		      printf ("I am here at depth 3");
		      if ((-5 * x1 * x5) != 16)
			{
			  printf ("I am here at depth 2");
			  if ((-11 * x2 * x8) + (1 * x4 * x10) == 11)
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
