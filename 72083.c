void CWE617_Reachable_Assertion__fgets_34_bad() int data ; CWE617_Reachable_Assertion__fgets_34_unionType myUnion ; data = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); myUnion . unionFirst = data; int data = myUnion . unionSecond ; assert ( data > ASSERT_VALUE ); 