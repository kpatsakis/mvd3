void bad() wchar_t * data ; wchar_t dataBuffer [ 256 ] = L "" data = dataBuffer; badSource ( data ); static void badSource(wchar_t * &data) size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 256 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  fclose ( pFile ); 