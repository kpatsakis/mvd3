static void goodB2G() int count ; count = - 1; CWE400_Resource_Exhaustion__fscanf_fwrite_53b_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__fscanf_fwrite_53b_goodB2GSink(int count) CWE400_Resource_Exhaustion__fscanf_fwrite_53c_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__fscanf_fwrite_53c_goodB2GSink(int count) CWE400_Resource_Exhaustion__fscanf_fwrite_53d_goodB2GSink ( count ); void CWE400_Resource_Exhaustion__fscanf_fwrite_53d_goodB2GSink(int count) const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile == NULL )  if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  if ( pFile )  fclose ( pFile ); 