void CWE369_Divide_by_Zero__float_fgets_22_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( float ) atof ( inputBuffer ); CWE369_Divide_by_Zero__float_fgets_22_badSink ( data ); void CWE369_Divide_by_Zero__float_fgets_22_badSink(float data) int result = ( int ) ( 100.0 / data ) ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 