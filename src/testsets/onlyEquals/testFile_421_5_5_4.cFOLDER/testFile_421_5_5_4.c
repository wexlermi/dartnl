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
// x0 = 9
// x1 = 1
// x2 = -9
// x3 = 6
// x4 = 0
  if ((2 * x0 * x2 * x2 * x2) + (-2 * x0 * x2 * x2 * x3) +
      (-7 * x2 * x2 * x3 * x3) + (1 * x0 * x2 * x4 * x4) +
      (1 * x2 * x2 * x2) == -43011)
    {
      printf ("I am here at depth 5");
      if ((21 * x0 * x2 * x2 * x2) + (1 * x0 * x1 * x4 * x4) +
	  (1 * x1 * x2 * x4 * x4) + (-3 * x3 * x4 * x4 * x4) +
	  (1 * x1 * x4 * x4) == -137781)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x0 * x0 * x1 * x1) + (-8 * x2 * x3 * x3 * x3) +
	      (-2 * x2 * x2 * x2) + (1 * x0 * x2 * x4) + (149 * x2) +
	      (3 * 1) == 15591)
	    {
	      printf ("I am here at depth 3");
	      if ((-7 * x1 * x3 * x4 * x4) + (-7 * x3 * x4 * x4 * x4) +
		  (-2 * x2 * x2 * x2) + (3 * x1 * x1 * x3) +
		  (3 * x1 * x3 * x4) + (1 * x0 * x0) + (-1 * x1 * x1) == 1556)
		{
		  printf ("I am here at depth 2");
		  if ((-3 * x1 * x1 * x1) + (-1 * x2 * x3 * x4) +
		      (1 * x1 * x2) == -12)
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