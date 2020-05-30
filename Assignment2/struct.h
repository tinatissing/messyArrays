struct Double_Array {

   double **array;
   int rowsize;
   int colsize;

};

struct Double_Array *double_array();
void randomize_array();
void print_array(); 
void free_array();
int swap_rows();
int swap_columns();
double rand_double();
struct Double_Array *shallow_copy();
struct Double_Array *deep_copy();
struct Double_Array *double_array();
