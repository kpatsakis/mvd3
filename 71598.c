static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; data = goodB2GSource ( data ); static char * goodB2GSource(char * data) strcpy ( data , BAD_SOURCE_FIXED_STRING ); return data ; size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  