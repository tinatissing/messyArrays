a2_q1: a2_q1.o double_array.o randomize_array.o print_array.o free_array.o swap_rows.o swap_columns.o
	gcc -ansi -Wall -o a2_q1 a2_q1.o double_array.o randomize_array.o print_array.o free_array.o swap_rows.o swap_columns.o

a2_q1.o: a2_q1.c
	gcc -ansi -Wall -c a2_q1.c

double_array.o: double_array.c
	gcc -ansi -Wall -c double_array.c

randomize_array.o: randomize_array.c
	gcc -ansi -Wall -c randomize_array.c

print_array.o: print_array.c
	gcc -ansi -Wall -c print_array.c

free_array.o: free_array.c
	gcc -ansi -Wall -c free_array.c	

swap_rows.o: swap_rows.c
	gcc -ansi -Wall -c swap_rows.c

swap_columns.o: swap_columns.c
	gcc -ansi -Wall -c swap_columns.c

a2_q2: a2_q2.o rand_double.o shallow_copy.o deep_copy.o double_array.o print_array.o free_array.o
	gcc -ansi -Wall -o a2_q2 a2_q2.o rand_double.o shallow_copy.o deep_copy.o double_array.o print_array.o free_array.o

a2_q2.o: a2_q2.c
	gcc -ansi -Wall -c a2_q2.c

rand_double.o: rand_double.c
	gcc -ansi -Wall -c rand_double.c

shallow_copy.o: shallow_copy.c
	gcc -ansi -Wall -c shallow_copy.c

deep_copy.o: deep_copy.c
	gcc -ansi -Wall -c deep_copy.c

clean: 
	rm: a2_q1 a2_q1.o double_array.o randomize_array.o print_array.o free_array.o swap_rows.o swap_columns.o a2_q2 a2_q2.o rand_double.o shallow_copy.o deep_copy.o
