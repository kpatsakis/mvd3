static void goodB2G() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE191_Integer_Underflow__int_fgets_sub_63b_goodB2GSink ( & data ); void CWE191_Integer_Underflow__int_fgets_sub_63b_goodB2GSink(int * dataPtr) int data = * dataPtr ; if ( data > INT_MIN )  int result = data - 1 ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 