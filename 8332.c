static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char * pointer = ( char * ) malloc ( sizeof ( char ) ) ; * pointer = data; char data = * pointer ; printHexCharLine ( data ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); free ( pointer ); 