static void good1() if ( GLOBAL_CONST_FIVE != 5 )  int * data = ( int * ) malloc ( 100 * sizeof ( int ) ) ; data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); tmpData = ( int * ) realloc ( data , ( 130000 ) * sizeof ( int ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] = 10; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 