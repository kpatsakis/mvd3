static void good2() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  doubleNumber = atof ( inputBuffer ); if ( doubleNumber > FLT_MAX || doubleNumber < FLT_MIN )  printFloatLine ( ( float ) doubleNumber ); void printFloatLine (float floatNumber) printf ( "%f\n" , floatNumber ); 