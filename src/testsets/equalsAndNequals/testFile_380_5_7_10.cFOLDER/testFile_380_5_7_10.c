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
// x0 = -6
// x1 = -8
// x2 = 6
// x3 = -9
// x4 = 10
// x5 = 9
// x6 = 8
  if ((-2 * x1 * x1 * x1 * x1 * x2 * x2 * x2 * x2 * x2 * x3) +
      (3 * x3 * x3 * x3 * x3 * x3 * x3 * x4 * x4 * x4 * x4) +
      (-1 * x0 * x0 * x1 * x1 * x1 * x1 * x1 * x3 * x3 * x5) +
      (-1 * x0 * x1 * x1 * x3 * x3 * x3 * x3 * x3 * x4 * x5) +
      (-7 * x1 * x1 * x1 * x2 * x3 * x3 * x3 * x4 * x5 * x5) +
      (-3 * x0 * x0 * x1 * x2 * x2 * x2 * x4 * x4 * x5 * x5) +
      (2 * x0 * x1 * x1 * x4 * x4 * x4 * x4 * x4 * x5 * x5) +
      (-1 * x0 * x0 * x1 * x1 * x1 * x1 * x1 * x1 * x3 * x6) +
      (1 * x0 * x0 * x0 * x1 * x1 * x1 * x3 * x3 * x4 * x6) +
      (-1 * x0 * x0 * x2 * x2 * x2 * x2 * x3 * x5 * x5 * x6) +
      (-4 * x0 * x1 * x1 * x1 * x4 * x4 * x4 * x5 * x5 * x6) +
      (-3 * x1 * x2 * x2 * x2 * x3 * x3 * x5 * x5 * x5 * x6) +
      (-3 * x0 * x0 * x0 * x0 * x4 * x4 * x5 * x5 * x5 * x6) +
      (1 * x0 * x0 * x1 * x2 * x2 * x2 * x4 * x4 * x6 * x6) +
      (-13 * x0 * x2 * x2 * x3 * x3 * x3 * x3 * x5 * x6 * x6) +
      (2 * x0 * x0 * x1 * x3 * x3 * x3 * x5 * x5 * x6 * x6) +
      (1 * x0 * x1 * x1 * x2 * x2 * x5 * x5 * x5 * x6 * x6) +
      (17 * x1 * x2 * x2 * x2 * x2 * x2 * x5 * x6 * x6 * x6) +
      (-4 * x0 * x0 * x0 * x1 * x2 * x6 * x6 * x6 * x6 * x6) +
      (-1 * x0 * x2 * x2 * x2 * x2 * x2 * x2 * x3 * x3) +
      (-2 * x2 * x2 * x2 * x2 * x2 * x3 * x4 * x4 * x4) +
      (-4 * x1 * x2 * x3 * x4 * x4 * x4 * x4 * x4 * x4) +
      (1 * x0 * x0 * x0 * x0 * x2 * x2 * x2 * x3 * x5) +
      (-3 * x0 * x3 * x3 * x3 * x3 * x3 * x4 * x4 * x5) +
      (6 * x1 * x2 * x2 * x2 * x2 * x2 * x3 * x5 * x6) +
      (1 * x0 * x0 * x2 * x2 * x3 * x3 * x4 * x5 * x6) +
      (2 * x2 * x2 * x3 * x3 * x3 * x4 * x4 * x5 * x6) +
      (-1 * x0 * x0 * x1 * x1 * x2 * x2 * x4 * x6 * x6) +
      (1 * x0 * x0 * x0 * x1 * x1 * x1 * x6 * x6 * x6) +
      (-1 * x1 * x1 * x1 * x1 * x1 * x3 * x6 * x6 * x6) +
      (1 * x0 * x0 * x0 * x1 * x3 * x4 * x4 * x4) +
      (1 * x1 * x1 * x2 * x3 * x3 * x4 * x4 * x5) +
      (1 * x0 * x0 * x0 * x0 * x2 * x3 * x4 * x6) +
      (5 * x1 * x2 * x2 * x3 * x4 * x4 * x4 * x6) +
      (-4 * x0 * x0 * x0 * x2 * x2 * x4 * x5 * x6) +
      (3 * x1 * x1 * x1 * x2 * x3 * x4 * x5 * x6) +
      (-2 * x1 * x2 * x2 * x2 * x3 * x4 * x5 * x6) +
      (-1 * x1 * x1 * x1 * x1 * x1 * x4 * x6 * x6) +
      (-8 * x0 * x0 * x0 * x1 * x1 * x6 * x6 * x6) +
      (1 * x0 * x0 * x5 * x5 * x6 * x6 * x6 * x6) +
      (-2 * x2 * x2 * x2 * x2 * x2 * x3 * x3) +
      (1 * x0 * x0 * x0 * x1 * x1 * x2 * x4) +
      (1 * x0 * x1 * x1 * x2 * x5 * x6 * x6) +
      (1 * x0 * x3 * x3 * x3 * x3 * x3) + (-1 * x0 * x1 * x2 * x2 * x4 * x5) +
      (-1 * x1 * x2 * x5 * x5 * x6 * x6) + (-11 * x3 * x3 * x3 * x4 * x4) +
      (-1 * x1 * x1 * x2 * x5 * x6) != -5165837075)
    {
      printf ("I am here at depth 5");
      if ((-3 * x0 * x0 * x0 * x1 * x1 * x1 * x1 * x3 * x5 * x5) +
	  (-1 * x2 * x2 * x4 * x4 * x4 * x4 * x4 * x4 * x5 * x5) +
	  (7 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x4 * x6) +
	  (-2 * x1 * x1 * x1 * x1 * x1 * x1 * x2 * x4 * x4 * x6) +
	  (21 * x0 * x1 * x1 * x1 * x2 * x2 * x3 * x3 * x6 * x6) +
	  (4 * x0 * x0 * x1 * x5 * x5 * x5 * x5 * x5 * x5) +
	  (-3 * x0 * x0 * x1 * x1 * x4 * x5 * x5 * x5 * x6) +
	  (4 * x0 * x2 * x3 * x4 * x4 * x4 * x6 * x6 * x6) +
	  (14 * x1 * x1 * x1 * x1 * x2 * x3 * x4 * x4) +
	  (-2 * x2 * x2 * x3 * x4 * x4 * x4 * x5 * x5) +
	  (2 * x0 * x1 * x2 * x4 * x4 * x4 * x5 * x6) +
	  (2 * x0 * x0 * x0 * x4 * x4 * x4) + (-2 * x0 * x1 * x4 * x4) ==
	  13499313344)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x1 * x1 * x1 * x1 * x2 * x2 * x3 * x3 * x4 * x4) +
	      (-2 * x0 * x2 * x2 * x2 * x2 * x2 * x3 * x3 * x4 * x4) +
	      (-1 * x0 * x1 * x1 * x1 * x1 * x2 * x4 * x5 * x5 * x5) +
	      (-8 * x1 * x1 * x3 * x4 * x4 * x4 * x5 * x5 * x5 * x5) +
	      (-10 * x1 * x1 * x2 * x2 * x2 * x2 * x3 * x3 * x4 * x6) +
	      (4 * x3 * x3 * x3 * x3 * x3 * x3 * x3 * x4 * x5 * x6) +
	      (1 * x0 * x2 * x2 * x2 * x3 * x3 * x3 * x5 * x5 * x6) +
	      (-1 * x1 * x1 * x1 * x2 * x3 * x3 * x5 * x5 * x5 * x6) +
	      (-2 * x1 * x1 * x1 * x1 * x4 * x5 * x5 * x5 * x5 * x6) +
	      (1 * x0 * x0 * x0 * x0 * x3 * x4 * x4 * x5 * x6 * x6) +
	      (1 * x1 * x1 * x2 * x2 * x2 * x2 * x5 * x5 * x6 * x6) +
	      (-1 * x0 * x1 * x1 * x3 * x5 * x5 * x6 * x6 * x6 * x6) +
	      (1 * x0 * x0 * x0 * x5 * x5 * x6 * x6 * x6 * x6 * x6) +
	      (-1 * x0 * x0 * x0 * x0 * x2 * x2 * x4 * x4 * x5) +
	      (13 * x1 * x2 * x4 * x4 * x4 * x4 * x4 * x4 * x6) +
	      (2 * x0 * x0 * x0 * x1 * x3 * x3 * x3 * x5 * x6) +
	      (1 * x1 * x1 * x1 * x3 * x3 * x3 * x5 * x5 * x6) +
	      (-6 * x0 * x0 * x1 * x1 * x3 * x5 * x5 * x6 * x6) +
	      (-58 * x0 * x0 * x1 * x1 * x1 * x4 * x6 * x6 * x6) +
	      (3 * x0 * x0 * x0 * x0 * x2 * x2 * x3 * x4) +
	      (-2 * x0 * x0 * x0 * x1 * x1 * x2 * x4 * x4) +
	      (2 * x0 * x1 * x2 * x4 * x4 * x4 * x4 * x5) +
	      (-8 * x1 * x4 * x4 * x5 * x5 * x5 * x5 * x6) +
	      (1 * x1 * x1 * x3 * x3 * x6 * x6 * x6 * x6) +
	      (16 * x0 * x0 * x2 * x2 * x5 * x5 * x5) +
	      (1 * x0 * x1 * x3 * x3 * x3 * x4 * x6) +
	      (1 * x2 * x3 * x4 * x5 * x5 * x6 * x6) +
	      (-2 * x0 * x3 * x3 * x3 * x6 * x6 * x6) +
	      (-7 * x1 * x2 * x2 * x4 * x6 * x6 * x6) +
	      (1 * x3 * x3 * x5 * x5 * x6 * x6 * x6) +
	      (-2 * x2 * x2 * x3 * x4 * x6 * x6) +
	      (-4 * x3 * x3 * x3 * x3 * x4) + (-2 * x2 * x2 * x3 * x4 * x5) !=
	      11487275170)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x0 * x0 * x0 * x0 * x0 * x0 * x3 * x4 * x6) +
		  (1 * x0 * x0 * x0 * x2 * x3 * x4 * x4 * x4 * x5 * x6) +
		  (-4 * x0 * x0 * x1 * x2 * x3 * x4 * x4 * x4 * x5 * x6) +
		  (7 * x0 * x0 * x0 * x1 * x1 * x1 * x4 * x5 * x5 * x6) +
		  (-1 * x3 * x3 * x3 * x3 * x3 * x5 * x5 * x5 * x5 * x6) +
		  (1 * x0 * x4 * x4 * x4 * x4 * x4 * x4 * x5 * x6 * x6) +
		  (-2 * x1 * x1 * x1 * x3 * x3 * x3 * x5 * x5 * x6 * x6) +
		  (-6 * x0 * x0 * x0 * x3 * x3 * x3 * x4 * x4 * x4) +
		  (-8 * x0 * x1 * x1 * x2 * x2 * x2 * x3 * x3 * x6) +
		  (-1 * x0 * x1 * x1 * x1 * x5 * x5 * x5 * x6 * x6) +
		  (1 * x0 * x0 * x0 * x4 * x6 * x6 * x6 * x6 * x6) +
		  (3 * x2 * x2 * x3 * x4 * x6 * x6 * x6 * x6 * x6) +
		  (-25 * x0 * x0 * x0 * x1 * x3 * x3 * x4 * x5) +
		  (1 * x1 * x1 * x2 * x3 * x4 * x5 * x5 * x5) +
		  (-1 * x0 * x0 * x0 * x2 * x2 * x4 * x5 * x6) +
		  (2 * x1 * x1 * x1 * x1 * x3 * x3 * x3) +
		  (-1 * x1 * x1 * x3 * x3 * x3 * x4 * x5) +
		  (1 * x2 * x2 * x2 * x4 * x5 * x5) == -4434275016)
		{
		  printf ("I am here at depth 2");
		  if ((2 * x2 * x3 * x3 * x3 * x3 * x3 * x3 * x3 * x3 * x4) +
		      (-1 * x0 * x3 * x3 * x3 * x3 * x3 * x3 * x4 * x4 * x4) +
		      (-1 * x0 * x0 * x1 * x1 * x3 * x4 * x4 * x4 * x4 * x5) +
		      (-1 * x0 * x0 * x0 * x1 * x2 * x2 * x2 * x3 * x5 * x5) +
		      (1 * x0 * x0 * x1 * x2 * x2 * x2 * x3 * x4 * x5 * x5) +
		      (4 * x0 * x0 * x1 * x2 * x2 * x2 * x2 * x2 * x4 * x6) +
		      (-2 * x0 * x1 * x1 * x4 * x5 * x5 * x5 * x5 * x6 * x6) +
		      (1 * x0 * x0 * x0 * x0 * x2 * x3 * x3 * x6 * x6 * x6) +
		      (-1 * x2 * x3 * x5 * x5 * x5 * x5 * x5 * x6 * x6 * x6) +
		      (1 * x0 * x0 * x0 * x2 * x4 * x5 * x6 * x6 * x6 * x6) +
		      (-1 * x0 * x3 * x3 * x3 * x4 * x6 * x6 * x6 * x6 * x6) +
		      (-7 * x0 * x0 * x3 * x4 * x4 * x4 * x4 * x6 * x6) +
		      (-1 * x2 * x2 * x2 * x2 * x3 * x4 * x4 * x6) +
		      (1 * x0 * x2 * x2 * x2 * x4 * x4 * x6 * x6) +
		      (-1 * x2 * x3 * x3 * x3 * x3 * x6 * x6 * x6) +
		      (-1 * x0 * x0 * x1 * x1 * x1 * x3 * x5) +
		      (-1 * x0 * x0 * x0 * x0 * x2 * x2 * x6) +
		      (-1 * x0 * x0 * x1 * x1 * x1 * x6 * x6) +
		      (1 * x1 * x3 * x3 * x3 * x4 * x6 * x6) +
		      (-6 * x0 * x4 * x4 * x6) != 14933832494)
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
