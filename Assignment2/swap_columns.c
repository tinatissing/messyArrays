#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "struct.h"

int swap_columns( struct Double_Array *p, int swap1, int swap2 ) {

   int i;
   double holder;

   for (i=0; i<p->rowsize; i++) {
      holder = p->array[i][swap1];
      p->array[i][swap1] = p->array[i][swap2];
      p->array[i][swap2] = holder;
   }

   print_array( p );

   /*The fast approach from swap_rows can't be used here because you can't copy the columns in a 2d array to a "holding" variable like you can with the rows. Because it is a 2d array, you have to take 1 row value from each column, so it must be done using a double for loop.*/

   return( 1 );


}
