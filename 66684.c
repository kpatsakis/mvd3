static void goodG2B1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 