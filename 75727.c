void dynamic_buffer_underrun_035() char * * doubleptr = ( char * * ) malloc ( 10 * sizeof ( char * ) ) ; doubleptr [ i ] = ( char * ) malloc ( 10 * sizeof ( char ) ); doubleptr [ loc1 ] [ loc2 ] = 'T'; if ( loc2 == 0 )  loc2 ++; doubleptr [ 0 ] [ loc2 ] = 'T'; for (i=0;i<10;i++) free ( doubleptr [ i ] ); free ( doubleptr ); 