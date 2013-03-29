#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 5
// x1 = 5
  if ((1 * x0 * x0 * x0 * x0 * x0 * x0 * x1) +
      (2 * x0 * x0 * x0 * x0 * x0 * x1 * x1) +
      (1 * x0 * x0 * x0 * x1 * x1 * x1 * x1) +
      (1 * x0 * x0 * x1 * x1 * x1 * x1 * x1) +
      (-4 * x1 * x1 * x1 * x1 * x1 * x1 * x1) +
      (-8 * x0 * x0 * x0 * x0 * x0 * x0) + (2 * x0 * x0 * x0 * x1 * x1 * x1) +
      (1 * x0 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x1 * x1) +
      (-3 * x0 * x1 * x1) + (1 * x0 * x0) >= -13536)
    {
      printf ("I am here at depth 5");
      if ((-3 * x0 * x0 * x0 * x0 * x0 * x0) <= -46795)
	{
	  printf ("I am here at depth 4");
	  if ((-10 * x0 * x0 * x1 * x1 * x1 * x1 * x1) +
	      (1 * x1 * x1 * x1 * x1 * x1 * x1 * x1) +
	      (3 * x1 * x1 * x1 * x1 * x1 * x1) +
	      (1 * x0 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x0 * x1 * x1) +
	      (3 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0) +
	      (-1 * x0 * x0 * x0 * x1) == -640625)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x1 * x1 * x1 * x1) + (-1 * x1 * x1) > -721)
		{
		  printf ("I am here at depth 2");
		  if ((4 * x0 * x0 * x0 * x0 * x0 * x0 * x1) +
		      (-1 * x0 * x0 * x0 * x0 * x0 * x1 * x1) +
		      (1 * x0 * x0 * x0 * x0 * x1 * x1 * x1) +
		      (-9 * x0 * x0 * x1 * x1 * x1 * x1 * x1) +
		      (21 * x1 * x1 * x1 * x1 * x1 * x1 * x1) +
		      (1 * x0 * x0 * x0 * x0 * x0 * x1) +
		      (1 * x0 * x0 * x0 * x1 * x1 * x1) +
		      (1 * x0 * x0 * x0 * x1 * x1) + (2 * x1 * x1 * x1 * x1) +
		      (-2 * x0 * x0 * x0) + (-5 * x0 * x0 * x1) +
		      (-5 * x1 * x1 * x1) + (-1 * x0 * x1) + (-1 * x1 * x1) +
		      (23 * x0) + (1 * 1) <= 1284287)
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
