static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_61b_goodB2GSource ( data ); wchar_t * CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_61b_goodB2GSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 