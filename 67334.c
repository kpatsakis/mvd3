static void goodG2B2() char * data ; data = NULL; data = goodG2B2Source ( data ); static char * goodG2B2Source(char * data) if ( goodG2B2Static )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 