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
// x0 = -9
// x1 = 10
// x2 = 4
// x3 = -9
// x4 = -8
// x5 = 10
// x6 = 0
  if ((-4 * x0 * x0 * x1 * x5) + (1 * x0 * x2 * x5 * x5) +
      (1 * x1 * x5 * x5) + (1 * x5 * x6 * x6) != -34988)
    {
      printf ("I am here at depth 5");
      if ((-1 * x1 * x1 * x2 * x4) + (-1 * x3 * x4 * x5 * x6) +
	  (-34 * x0 * x1 * x3) + (-1 * x1 * x2 * x3) + (-1 * x3 * x5) !=
	  -23881)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x2 * x2 * x2 * x3) + (1 * x2 * x2 * x3 * x4) +
	      (3 * x1 * x1 * x4 * x4) + (-1 * x3 * x3 * x4 * x6) == 20928)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x3 * x4 * x4 * x5) + (-1 * x2 * x2 * x5 * x5) != 4259)
		{
		  printf ("I am here at depth 2");
		  if ((-2 * x0 * x3 * x4 * x4) + (13 * x1 * x4 * x5 * x6) +
		      (4 * x0 * x0 * x1) + (9 * x0 * x2 * x5) +
		      (-1 * x1 * x5) + (-1 * x2 * x5) != -10449)
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