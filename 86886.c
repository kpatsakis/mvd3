static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; data [ 0 ] = '\0'; baseObject -> action ( data ); void CWE256_Plaintext_Storage_of_Password__w32_char_82_goodB2G::action(char * data) payloadBytes = decodeHexChars ( payload , sizeof ( payload ) , data ); size_t decodeHexChars(unsigned char * bytes, size_t numBytes, const char * hex) while ( numWritten < numBytes && isxdigit ( hex [ 2 * numWritten ] ) && isxdigit ( hex [ 2 * numWritten + 1 ] ) )  sscanf ( & hex [ 2 * numWritten ] , "%02x" , & byte ); bytes [ numWritten ] = ( unsigned char ) byte; return numWritten ; SecureZeroMemory ( data , 100 * sizeof ( char ) ); if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , payload , & payloadBytes ) )  memcpy ( data , payload , payloadBytes ); data [ payloadBytes / sizeof ( char ) ] = '\0'; if ( LogonUserA ( username , domain , data , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  