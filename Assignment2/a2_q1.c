#include "struct.h" 
#include <stdio.h>
#include <stdlib.h>

int main () {

   printf("--------------------\n");
   printf("     Question 1     \n"); 
   printf("--------------------\n");

   double min = 0;
   double max = 20;
   
   struct Double_Array *ptr = double_array(6,9);
	
   randomize_array(ptr, min, max); 
   print_array(ptr);

   double a = ptr -> rowsize;
   double b = 0;
   int swap1 = 0;
   int swap2 = 0;

   while (swap1 == swap2) {
      swap1 = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
      swap2 = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
   }

   printf("Rows %d and %d were swapped.\n", swap1, swap2);
   swap_rows( ptr, swap1, swap2 );

   a = ptr -> colsize;
   swap1 = 0;
   swap2 = 0;

   while (swap1 == swap2) {
      swap1 = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
      swap2 = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
   }

   printf("Columns %d and %d were swapped.\n", swap1, swap2);
   swap_columns( ptr, swap1, swap2 );


   printf("\n\n\n");

   free_array( ptr );

   return(0);
}
