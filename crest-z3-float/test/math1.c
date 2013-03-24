/* Copyright (c) 2008, Jacob Burnim (jburnim@cs.berkeley.edu)
 *
 * This file is part of CREST, which is distributed under the revised
 * BSD license.  A copy of this license can be found in the file LICENSE.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See LICENSE
 * for details.
 */

#include <crest.h>
#include <stdio.h>
int main(void) {
  int a, b;
  CREST_int(a);
  CREST_int(b);
  if (a*a*b == 36 && b*b==16 && a>0) {
	printf("%d %d", a, b);
    return 1;
  } else {
	printf("%d %d", a, b);
    return 0;
  }
}
