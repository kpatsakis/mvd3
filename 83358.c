void CWE369_Divide_by_Zero__float_fgets_66_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( float ) atof ( inputBuffer ); dataArray [ 2 ] = data; CWE369_Divide_by_Zero__float_fgets_66b_badSink ( dataArray ); void CWE369_Divide_by_Zero__float_fgets_66b_badSink(float dataArray[]) float data = dataArray [ 2 ] ; int result = ( int ) ( 100.0 / data ) ; printIntLine ( result ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 