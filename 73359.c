void CWE467_Use_of_sizeof_on_Pointer_Type__int_09_bad() if ( GLOBAL_CONST_TRUE )  badInt = ( int * ) malloc ( sizeof ( badInt ) ); * badInt = 5; printIntLine ( * badInt ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( badInt ); 