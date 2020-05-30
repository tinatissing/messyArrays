#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

struct Double_Array *deep_copy( struct Double_Array *p ) {
   
   struct Double_Array *deepp = double_array( 6, 9 );
   int i;

   for (i=0; i<p->array[i]; i++) {
      deepp->array[i] = p->array[i];
   }

   return ( deepp );

}
