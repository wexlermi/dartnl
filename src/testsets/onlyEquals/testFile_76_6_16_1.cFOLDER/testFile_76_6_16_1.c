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
//Possible solution to enter:
// x0 = 1
// x1 = 0
// x2 = 8
// x3 = -9
// x4 = 6
// x5 = -7
// x6 = 9
// x7 = -6
// x8 = 1
// x9 = -6
// x10 = -5
// x11 = -5
// x12 = 0
// x13 = 1
// x14 = -6
// x15 = 2
  if ((1 * x3) == -9)
    {
      printf ("I am here at depth 6");
      if ((-2 * x8) == -2)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x3) == -9)
	    {
	      printf ("I am here at depth 4");
	      if ((-8 * x5) == 56)
		{
		  printf ("I am here at depth 3");
		  if ((1 * 1) == 1)
		    {
		      printf ("I am here at depth 2");
		      if ((-5 * x8) == -5)
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