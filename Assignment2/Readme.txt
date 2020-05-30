Program Name: a1_q1.c and a2_q2.c
	
Author: Tina Tissington
	
Last Update: Feb. 7, 2020
	
Function a2_q1: Create a double array struct stored with random double values and swaps 2 rows and 2 columns.
	
Compilation: gcc -ansi -Wall -o a2_q1 a2_q1.o double_array.o randomize_array.o print_array.o free_array.o swap_rows.o swap_columns.o

or

make
	
Execution: ./a2_q1

Other Funtions Used: double_array, randomize_array, print_array, free_array, swap_rows, swap_columns

Swap Rows: I used the faster method to do swap rows. This is faster because it swaps the entire row or each array, instead of looping through every column value in the rows you want to swap.

Swap Columns: The fast approach from swap_rows can't be used here because you can't copy the columns in a 2d array to a "holding" variable like you can with the rows. Because it is a 2d array, you have to take 1 row value from each column, so it must be done using a double for loop.

Function a2_q2: Assign pointers to a1 (pointing to a1) as well as storing the values of a1 in other struct pointers (not pointing to a1). Print the array's and see the differece between assigning a pointer to a1 and assigning the values of a1 to a pointer.
	
Compilation: gcc -ansi -Wall -o a2_q2 a2_q2.o rand_double.o shallow_copy.o deep_copy.o double_array.o print_array.o free_array.o

or

make a2_q2
	
Execution: ./a2_q1

Other Funtions Used: rand_double, shallow_copy, deep_copy, double_array, print_array, free_array

Q2b: The results observed in Q2b are that the array of a1, a2, and a_shallow are all the same, but because deep_array is not pointing to a1 like the other 2, it doesn't print 100.0 at [0][1], 200.0 at [1][2], and 300.0 at [2][3]. It does print 400.0 at [3][4], and the others don't.

Q2c: The results observed in Q2c is that the arrays of a1 and shallow_array are the same because a_shallow is pointing to a1. Deep_array is the same as in Q2c. a2 and b1 print the same array because a2 points to b1 now. After setting new values to some position in each array, you get the same trend, but with the new values now in their respective spots. For example a1 and a_shallow both have 5000.0 at [0][1] and 700.0 [2][3] because a_shallow is pointing to a1.

Q2d: The pointers a1, a_deep, and b1 need to be freed because they are the only pointers that are malloc'd. Because a2 and a_shallow points to other struct pointers, they didn't need to be malloc'd. I free'd a1, then a_deep, then b1 using the function free_array. In free array I had to free the memory allocated for each of the rows in the struct array, then the memory allocated for the array itself, and then the memory for the pointer. If the pointer is freed without freeing all of the other memory allocated "inside" the pointer, you will get a memory leak because that memory "inside" the pointer has not been freed.

Restrictions: I didn't end up using the print_struct function but I still printed all of the required information in the main function of a2_q2
