#include "struct.h"
#include <stdlib.h>
#include <stdio.h>

int main () {

   printf("--------------------\n");
   printf("     Question 2a    \n"); 
   printf("--------------------\n");

   int i;

   struct Double_Array *a1 = double_array( 6, 9 );
   struct Double_Array *a2 = a1;
   struct Double_Array *a_shallow = NULL;
   struct Double_Array *a_deep = NULL;

   int j;

   double a = 10;
   double b = 0;

   for (i=0; i < 6; i++) {
      for (j=0; j < 9; j++) {
         a1->array[i][j] = rand_double( a, b );
      }
   }

   printf("the address of a1 is %p\n", (void *) a1);
   printf("The structure pointed to by a1 is: Rowsize: %d, Colsize: %d\n", a1->rowsize, a1->colsize);
   print_array( a1 );

   printf("\n");
   printf("the address of a2 is %p\n", (void *) a2);
   printf("The structure pointed to by a1 is: Rowsize: %d, Colsize: %d\n", a2->rowsize, a2->colsize);
   print_array( a2 );

   a_shallow = shallow_copy( a1 );

   printf("\n");
   printf("the address of a_shallow is %p\n", (void *) a_shallow);
   printf("The structure pointed to by a1 is: Rowsize: %d, Colsize: %d\n", a_shallow->rowsize, a_shallow->colsize);
   print_array( a_shallow );

   a_deep = deep_copy( a1 );

   printf("\n");
   printf("the address of a_deep is %p\n", (void *) a_deep);
   printf("The structure pointed to by a1 is: Rowsize: %d, Colsize: %d\n", a_deep->rowsize, a_deep->colsize);
   printf("\n");
   print_array( a_deep );

   printf("\n\n\n");

   printf("--------------------\n");
   printf("     Question 2b    \n"); 
   printf("--------------------\n");

   a1->array[0][1] = 100.0;
   a2->array[1][2] = 200.0;
   a_shallow->array[2][3] = 300.0;
   a_deep->array[3][4] = 400.0;

   print_array( a1 );
   print_array( a2 );
   print_array( a_shallow );
   print_array( a_deep );

   printf("\n\n\n");

   printf("--------------------\n");
   printf("     Question 2c    \n"); 
   printf("--------------------\n");

   struct Double_Array *b1 = double_array( 6, 9 );

   b = 20.0;

   for (i=0; i < 6; i++) {
      for (j=0; j < 9; j++) {
         b1->array[i][j] = rand_double( a, b );
      }
   }

   a2 = b1;

   print_array( a1 );
   print_array( a2 );
   print_array( a_shallow );
   print_array( a_deep );
   print_array( b1 );
   
   a1->array[0][1] = 5000.0;
   a2->array[1][2] = 6000.0;
   a_shallow->array[2][3] = 700.0;
   a_deep->array[3][4] = 8000.0;
   b1->array[4][5] = 9000.0;
   
   print_array( a1 );
   print_array( a2 );
   print_array( a_shallow );
   print_array( a_deep );
   print_array( b1 );

   free_array( a1 );
   free_array( a_deep );
   free_array( b1 );

   return(0);

}
