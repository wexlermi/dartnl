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
//Possible solution to enter:
// x0 = 6
// x1 = 7
// x2 = 6
// x3 = -3
// x4 = -5
// x5 = -9
// x6 = -4
// x7 = -6
  if ((-5 * x0 * x4) + (-1 * x1 * x4) == 185)
    {
      printf ("I am here at depth 10");
      if ((1 * x4 * x4) + (-1 * x6) == 29)
	{
	  printf ("I am here at depth 9");
	  if ((1 * x2 * x2) + (-1 * x4) == 41)
	    {
	      printf ("I am here at depth 8");
	      if ((-1 * x0 * x2) + (-1 * x0 * x3) + (-1 * x0) == -24)
		{
		  printf ("I am here at depth 7");
		  if ((-1 * x2 * x2) + (-3 * x1 * x3) == 27)
		    {
		      printf ("I am here at depth 6");
		      if ((2 * x4) == -10)
			{
			  printf ("I am here at depth 5");
			  if ((-1 * x0 * x2) + (21 * x4 * x6) + (-1 * x2) ==
			      378)
			    {
			      printf ("I am here at depth 4");
			      if ((3 * x0 * x4) == -90)
				{
				  printf ("I am here at depth 3");
				  if ((-1 * x1 * x4) + (-17 * x7) == 137)
				    {
				      printf ("I am here at depth 2");
				      if ((-1 * x2 * x3) + (2 * x6 * x7) ==
					  66)
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
