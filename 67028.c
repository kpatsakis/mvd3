void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; badSource ( data ); static void badSource(char * &data) strcpy ( data , BAD_SOURCE_FIXED_STRING ); for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 