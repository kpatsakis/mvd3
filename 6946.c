static void goodG2B2() int * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = new int [ 100 ]; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 