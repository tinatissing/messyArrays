#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "struct.h"

void randomize_array( struct Double_Array *p, double a, double b ) {

   double holder;
   int i;
   int j;

   double rand_num = 0;
	
   for (i=0; i < 6; i++) {
      for (j=0; j < 9; j++) {
         if (b < a) {
            holder = a;
            a = b;
            b = holder;
         }  
	 rand_num = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
         p->array[i][j] = rand_num;
      }
   }
  
/*return( rand_num ); if anything, you souhld be returning the pointer, but this is not required because the function itself is pointing outside of main. since we're pointing at a struct somewhere else, we dont need to return it. anything happening in here with a pointer automatically changes everywhere else*/
}

