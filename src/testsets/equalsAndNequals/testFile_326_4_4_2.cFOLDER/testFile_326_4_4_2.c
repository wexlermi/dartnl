#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -10
// x1 = 3
// x2 = 5
// x3 = -7
  if ((4 * x1 * x1) + (-1 * x1 * x2) + (1 * x0) != 102)
    {
      printf ("I am here at depth 4");
      if ((21 * x1) != 49)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x2 * x2) + (1 * x1 * x3) != -57)
	    {
	      printf ("I am here at depth 2");
	      if ((176 * x2 * x3) + (-34 * x3 * x3) == -7826)
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
