#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 9
// x1 = -3
// x2 = -10
  if ((1 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x2 * x2) +
      (-46 * x1 * x2 * x2 * x2) + (-1 * x0 * x0 * x1) + (-11 * 1) == -135311)
    {
      printf ("I am here at depth 5");
      if ((2 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x2) + (3 * x0 * x2 * x2) +
	  (17 * x1 * x2 * x2) + (-1 * 1) <= -1399)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x1 * x2) +
	      (57 * x1 * x2 * x2 * x2) + (1 * x1 * x1) + (-1 * x1) == 168339)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x0 * x2 * x2) + (-1 * x1 * x1) != -8103)
		{
		  printf ("I am here at depth 2");
		  if ((9 * x2 * x2 * x2) + (1 * x0 * x1) + (-1 * x1) == -9024)
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