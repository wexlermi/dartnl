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
// x0 = 3
// x1 = 10
// x2 = 0
// x3 = 0
// x4 = 10
// x5 = 7
// x6 = 3
// x7 = -8
// x8 = 1
// x9 = 3
  if ((3 * 1) >= -47)
    {
      printf ("I am here at depth 5");
      if ((1 * x6) < 23)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x8) >= -40)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x7) < 31)
		{
		  printf ("I am here at depth 2");
		  if ((-11 * 1) >= -107)
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
