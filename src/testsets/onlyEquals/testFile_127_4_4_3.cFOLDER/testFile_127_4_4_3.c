#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -3
// x1 = -3
// x2 = 5
// x3 = 3
  if ((-1 * x0 * x1 * x3) == -27)
    {
      printf ("I am here at depth 4");
      if ((3 * x0 * x2 * x3) + (1 * x1 * x2 * x3) + (-17 * x1 * x1) +
	  (1 * 1) == -332)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x1 * x1 * x3) + (-1 * x0 * x2 * x3) + (9 * x2 * x2 * x3) +
	      (-4 * x1 * x1) == 711)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x0 * x1) + (-3 * x0 * x1 * x2) + (1 * x2) +
		  (-1 * 1) == -104)
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
