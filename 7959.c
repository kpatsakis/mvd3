void CWE197_Numeric_Truncation_Error__short_fgets_54_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); CWE197_Numeric_Truncation_Error__short_fgets_54b_badSink ( data ); void CWE197_Numeric_Truncation_Error__short_fgets_54b_badSink(short data) CWE197_Numeric_Truncation_Error__short_fgets_54c_badSink ( data ); void CWE197_Numeric_Truncation_Error__short_fgets_54c_badSink(short data) CWE197_Numeric_Truncation_Error__short_fgets_54d_badSink ( data ); void CWE197_Numeric_Truncation_Error__short_fgets_54d_badSink(short data) CWE197_Numeric_Truncation_Error__short_fgets_54e_badSink ( data ); void CWE197_Numeric_Truncation_Error__short_fgets_54e_badSink(short data) char charData = ( char ) data ; printHexCharLine ( charData ); void printHexCharLine (char charHex) printf ( "%02x\n" , charHex ); 