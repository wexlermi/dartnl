#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 7
// x1 = 9
// x2 = -6
// x3 = -6
// x4 = 1
  if ((-1 * x0 * x1 * x2 * x2) + (1 * x1 * x3 * x4 * x4) +
      (-26 * x0 * x3 * x4) != -1271)
    {
      printf ("I am here at depth 5");
      if ((-1 * x0 * x1 * x2 * x3 * x3) + (-1 * x0 * x3 * x3 * x4 * x4) >
	  13298)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x0 * x3 * x3 * x4 * x4) + (-1 * x0 * x1 * x4 * x4 * x4) +
	      (-2 * x0 * x1 * x2 * x3) + (-1 * x2 * x3 * x3 * x3) +
	      (-17 * x0 * x1 * x2 * x4) + (3 * x1 * x1 * x4 * x4) +
	      (2 * x2 * x3 * x4) + (-2 * x0 * x3) > 621)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x2 * x3 * x3 * x3) +
		  (-1 * x0 * x0 * x4 * x4 * x4) <= -9108)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x2 * x2 * x2 * x3 * x4) +
		      (-6 * x2 * x4 * x4 * x4 * x4) +
		      (-1 * x0 * x1 * x1 * x2) + (-1 * x2 * x2 * x3 * x3) +
		      (1 * x0 * x2 * x3 * x4) == 3690)
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
