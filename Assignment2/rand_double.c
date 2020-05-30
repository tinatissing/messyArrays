#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

double rand_double( double a, double b) {
   double rand_num;
   int holder;

   if (b < a) {
      holder = a;
      a = b;
      b = holder;
   }

   rand_num = ((double) rand() / (double) RAND_MAX) * (b-a) + a;

   return( rand_num );
}
