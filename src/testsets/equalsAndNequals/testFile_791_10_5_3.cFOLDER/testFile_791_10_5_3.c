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
// x0 = -1
// x1 = 1
// x2 = 8
// x3 = -2
// x4 = 1
  if ((-14 * x0 * x1 * x4) + (-1 * x0 * x2 * x4) + (-3 * x1 * x1) +
      (1 * x1 * x3) != 49)
    {
      printf ("I am here at depth 10");
      if ((2 * x0 * x1 * x2) + (-1 * x2 * x3) + (-3 * x2) != -55)
	{
	  printf ("I am here at depth 9");
	  if ((2 * x2 * x3 * x3) + (-1 * x1 * x3 * x4) == 66)
	    {
	      printf ("I am here at depth 8");
	      if ((-1 * x0 * x0 * x1) + (3 * x1 * x1 * x3) + (1 * x0 * x2) +
		  (2 * x0) != 38)
		{
		  printf ("I am here at depth 7");
		  if ((-11 * x1 * x1 * x2) + (-1 * x1 * x2 * x2) +
		      (2 * x0 * x3 * x3) + (-1 * x3 * x3 * x4) +
		      (1 * x0 * x0) != -135)
		    {
		      printf ("I am here at depth 6");
		      if ((-1 * x1 * x2 * x3) + (-1 * x3 * x3 * x3) +
			  (-1 * x3 * x4) != 97)
			{
			  printf ("I am here at depth 5");
			  if ((1 * x1 * x1 * x2) + (1 * x4 * x4 * x4) == 9)
			    {
			      printf ("I am here at depth 4");
			      if ((-3 * x2 * x2 * x3) + (1 * x2 * x4 * x4) +
				  (3 * x1) != 431)
				{
				  printf ("I am here at depth 3");
				  if ((1 * x1 * x1 * x1) +
				      (4 * x0 * x0 * x2) +
				      (1 * x1 * x1 * x3) + (-3 * x0 * x3) +
				      (2 * x2 * x3) == -7)
				    {
				      printf ("I am here at depth 2");
				      if ((-1 * x1 * x4) + (4 * x3 * x4) ==
					  -9)
					{
					  printf ("I am here at depth 1");

					}
				      else
					{
					  printf
					    ("I am at the else of depth 1");
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
	  else
	    {
	      printf ("I am at the else of depth 8");
	    }
	}
      else
	{
	  printf ("I am at the else of depth 9");
	}
    }
  else
    {
      printf ("I am at the else of depth 10");
    }
}
