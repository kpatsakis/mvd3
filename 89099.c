static void goodB2G() long * data ; data = NULL; data = NULL; data = ( long * ) realloc ( data , 100 * sizeof ( long ) ); goodB2GSink_b ( data ); void goodB2GSink_b(long * data) goodB2GSink_c ( data ); void goodB2GSink_c(long * data) free ( data ); 