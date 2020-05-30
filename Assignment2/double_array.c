#include "struct.h"
#include <stdlib.h>
#include <stdio.h>

struct Double_Array *double_array( int row, int col ) {

   int i;
   row = 6;
   col = 9;

   struct Double_Array *p = malloc(sizeof(struct Double_Array));
   p->array = malloc(sizeof(double *) * row);
   
   for (i=0; i<row; i++) {
      p -> array[i] = malloc(sizeof(double) * col);
   }

   p->rowsize = row; 
   p->colsize = col;

   return( p ); 
}
