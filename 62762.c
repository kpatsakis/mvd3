static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); baseObject -> action ( data ); void CWE190_Integer_Overflow__int_fgets_multiply_82_goodB2G::action(int data) if ( data > 0 )  if ( data < ( INT_MAX / 2 ) )  int result = data * 2 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 