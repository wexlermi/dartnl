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
// x0 = -4
// x1 = -4
// x2 = 3
// x3 = 9
// x4 = -7
  if ((1 * x0 * x0 * x0 * x1) + (-1 * x0 * x1 * x2 * x2) +
      (2 * x0 * x1 * x1 * x4) + (2 * x0 * x2 * x2 * x4) +
      (1 * x0 * x0 * x3 * x4) + (-9 * x2 * x2 * x4 * x4) +
      (1 * x2 * x2 * x2) + (1 * x0 * x0 * x4) + (-2 * x2 * x3 * x4) +
      (1 * x3 * x3) == -3091)
    {
      printf ("I am here at depth 9");
      if ((-2 * x1 * x1 * x2 * x2) + (1 * x0 * x2 * x2 * x3) +
	  (1 * x2 * x3 * x3 * x4) + (-1 * x0 * x4 * x4 * x4) +
	  (1 * x0 * x0 * x1) + (-1 * x1 * x2 * x2) + (-2 * x0 * x0) != -3735)
	{
	  printf ("I am here at depth 8");
	  if ((-1 * x0 * x2 * x3 * x3) + (-1 * x1 * x2 * x3 * x3) +
	      (1 * x2 * x3 * x3 * x4) + (1 * x0 * x1 * x4 * x4) +
	      (27 * x0 * x0 * x0) + (-1 * x0 * x4) + (-1 * 1) == -730)
	    {
	      printf ("I am here at depth 7");
	      if ((-1 * x2 * x2 * x2 * x2) + (-1 * x1 * x1 * x2 * x3) +
		  (-1 * x1 * x2 * x4) != -593)
		{
		  printf ("I am here at depth 6");
		  if ((-9 * x0 * x1 * x2 * x2) + (1 * x1 * x1 * x2 * x2) +
		      (-2 * x0 * x2 * x2 * x3) + (-2 * x2 * x2 * x3 * x4) +
		      (-1 * x0 * x1 * x1) + (-1 * x0 * x3 * x4) +
		      (-1 * x2 * x4 * x4) != 224)
		    {
		      printf ("I am here at depth 5");
		      if ((1 * x1 * x1 * x1) + (-7 * x0 * x2 * x3) +
			  (-5 * x3) == 647)
			{
			  printf ("I am here at depth 4");
			  if ((-1 * x0 * x2 * x2 * x3) +
			      (1 * x0 * x2 * x3 * x3) + (-1 * x0 * x2 * x2) +
			      (1 * x0 * x0 * x4) == -724)
			    {
			      printf ("I am here at depth 3");
			      if ((4 * x1 * x1 * x1 * x2) +
				  (1 * x0 * x1 * x1 * x3) +
				  (-3 * x2 * x2 * x3 * x3) +
				  (1 * x1 * x3 * x3) == -3855)
				{
				  printf ("I am here at depth 2");
				  if ((-1 * x3 * x3 * x3 * x4) +
				      (-26 * x1 * x1 * x1) + (2 * x0 * x4) +
				      (1 * x3 * x4) == 6760)
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
