static void goodB2G() int * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__delete_array_int_malloc_84_goodB2G * goodB2GObject = new CWE762_Mismatched_Memory_Management_Routines__delete_array_int_malloc_84_goodB2G ( data ) ; CWE762_Mismatched_Memory_Management_Routines__delete_array_int_malloc_84_goodB2G::CWE762_Mismatched_Memory_Management_Routines__delete_array_int_malloc_84_goodB2G(int * dataCopy) data = dataCopy; data = ( int * ) malloc ( 100 * sizeof ( int ) ); delete goodB2GObject CWE762_Mismatched_Memory_Management_Routines__delete_array_int_malloc_84_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__delete_array_int_malloc_84_goodB2G() free ( data ); 