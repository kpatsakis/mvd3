void CWE401_Memory_Leak__int_calloc_08_bad() int * data ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int * ) calloc ( 100 , sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 