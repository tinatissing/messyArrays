#include "struct.h"
#include <stdlib.h>

void free_array( struct Double_Array *ptr ) {

   int i;

   for (i=0; i<ptr->rowsize; i++) {
      free( ptr->array[i] );
   }

   free ( ptr->array );

   free( ptr );

}

/*Must free the the memory the opposite way you malloc'd it*/
