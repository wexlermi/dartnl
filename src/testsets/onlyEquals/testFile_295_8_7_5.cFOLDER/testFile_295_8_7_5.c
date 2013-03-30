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
// x0 = -2
// x1 = -7
// x2 = -5
// x3 = 2
// x4 = 10
// x5 = -6
// x6 = -2
  if ((43 * x0 * x1 * x2 * x4 * x6) == 60200)
    {
      printf ("I am here at depth 8");
      if ((1 * x2 * x2 * x3 * x3 * x6) + (3 * x0 * x0 * x2 * x6 * x6) +
	  (5 * x2 * x3 * x4 * x6 * x6) + (-1 * x0 * x2 * x4 * x6) +
	  (5 * x3 * x6 * x6 * x6) + (1 * x1 * x3 * x4) + (-2 * x4 * x5 * x5) +
	  (-5 * x0 * x3 * x6) + (-5 * x4 * x4 * x6) == -2220)
	{
	  printf ("I am here at depth 7");
	  if ((2 * x0 * x1 * x1 * x2 * x2) + (14 * x2 * x2 * x3 * x3 * x3) +
	      (1 * x0 * x3 * x4 * x5 * x6) + (-3 * x2 * x3 * x4 * x5 * x6) +
	      (6 * x2 * x4 * x5 * x5 * x6) + (6 * x0 * x2 * x4 * x6 * x6) +
	      (-3 * x0 * x0 * x6 * x6 * x6) + (1 * x1 * x3 * x6 * x6 * x6) +
	      (2 * x2 * x5 * x5 * x5) + (23 * x4 * x5 * x5 * x6) +
	      (-6 * x5 * x5 * x5) == 12124)
	    {
	      printf ("I am here at depth 6");
	      if ((1 * x1 * x1 * x1 * x3 * x4) +
		  (1 * x1 * x1 * x2 * x3 * x5) +
		  (-1 * x2 * x2 * x3 * x4 * x6) +
		  (4 * x1 * x2 * x2 * x5 * x6) +
		  (-6 * x1 * x3 * x3 * x6 * x6) + (1 * x0 * x1 * x3 * x4) +
		  (-1 * x0 * x2 * x3 * x6) + (-15 * x0 * x4 * x5) == -12128)
		{
		  printf ("I am here at depth 5");
		  if ((-5 * x0 * x0 * x0 * x1 * x4) +
		      (1 * x0 * x1 * x1 * x3 * x4) +
		      (9 * x3 * x4 * x4 * x4 * x5) + (4 * x0 * x4 * x4 * x5) +
		      (1 * x6 * x6 * x6 * x6) == -107944)
		    {
		      printf ("I am here at depth 4");
		      if ((1 * x0 * x0 * x1 * x2 * x2) +
			  (-8 * x1 * x1 * x1 * x2 * x5) +
			  (-1 * x1 * x1 * x2 * x3 * x6) +
			  (3 * x1 * x2 * x3 * x3 * x6) +
			  (1 * x0 * x0 * x0 * x5) + (-2 * x0 * x0 * x1 * x5) +
			  (-3 * x1 * x1 * x3 * x5) + (2 * x1 * x1 * x4 * x5) +
			  (-63 * x0 * x4 * x4 * x5) +
			  (1 * x0 * x5 * x5 * x5) + (2 * x3 * x4 * x4 * x6) +
			  (-1 * x1 * x3 * x6 * x6) == -516)
			{
			  printf ("I am here at depth 3");
			  if ((1 * x1 * x1 * x1 * x3) == -686)
			    {
			      printf ("I am here at depth 2");
			      if ((2 * x0 * x2 * x2 * x3 * x5) +
				  (3 * x1 * x1 * x3 * x4 * x5) +
				  (-3 * x1 * x2 * x2 * x5 * x5) +
				  (1 * x0 * x0 * x5 * x5 * x6) +
				  (-1 * x0 * x1 * x2 * x6 * x6) +
				  (1 * x0 * x0 * x0 * x2) +
				  (2 * x2 * x2 * x3 * x3) +
				  (-1 * x1 * x2 * x3 * x5) +
				  (-24 * x0 * x1 * x4 * x5) +
				  (-1 * x2 * x4 * x4 * x5) +
				  (-13 * x0 * x0 * x5) +
				  (-8 * x1 * x2 * x5) == 22264)
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