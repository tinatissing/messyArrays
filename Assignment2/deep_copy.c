#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

struct Double_Array *deep_copy( struct Double_Array *p ) {
   
   struct Double_Array *deepp = double_array( 6, 9 );
   int i;
   int j;

   for (i=0; i<p->rowsize; i++) {
      for (j=0; j<p->colsize; j++) {
         deepp->array[i][j] = p->array[i][j];
      }
   }
   return ( deepp );

}
