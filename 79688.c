static void goodB2G1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; strcpy ( data , BAD_SOURCE_FIXED_STRING ); goodB2G1Sink ( data ); static void goodB2G1Sink(char * data) if ( goodB2G1Static )  size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  