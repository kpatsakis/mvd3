static void goodB2G2() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; if ( data != NULL )  data [ 0 ] = 5L L free ( data ); 