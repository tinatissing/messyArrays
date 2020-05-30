#include <stdio.h>
#include "struct.h"

void print_array( struct Double_Array *ptr ) {

   int i;
   int j;

   printf("\n");

   for (i=0; i<ptr->rowsize; i++) {
      for (j=0; j<ptr->colsize; j++) {
         printf("%-10.1f", ptr -> array[i][j]);
      }
      printf("\n");
   }

}
