static void goodG2B1() size_t data ; data = 0; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; data = 20; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 