static void goodG2B1() int64_t * data ; int64_t * dataGoodBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = dataGoodBuffer; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 