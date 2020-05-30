#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void print_struct( struct Double_Array *p, char * ) {
   
   int i;
   int j;

   printf("%s\n", char thing);
   printf("struct address = %p\n", (void *)p);
   printf("row_size = %d, col_size = %d\n", p->rowsize, p->colsize);
   printf("array address = %p, with contents:\n", (void *)p->array);
   printf("\n");

   for (i=0; i<p->rowsize; i++) {
      for (j=0; j<p->colsize; j++) {
         printf("%-10.1f", p -> array[i][j]);
      }
      printf("\n");
   }

   printf("\n\n");

}
