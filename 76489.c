static void goodB2G2() int count ; count = - 1; count = RAND32 ( ); CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Sink ( count ); void CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Sink(int count) if ( CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Global )  const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 