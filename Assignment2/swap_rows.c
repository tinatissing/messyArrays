#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int swap_rows( struct Double_Array *p, int swap1, int swap2 ) {

   double *holder = p->array[swap1];
   p->array[swap1] = p->array[swap2];
   p->array[swap2] = holder;

   /*This is the faster method to do swap rows. This is faster because it swaps the entire row or each array, instead of looping through every column value in the rows you want to swap.*/

   print_array( p );

   return(1);

}
