void CWE256_Plaintext_Storage_of_Password__w32_char_15_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; switch ( 6 )  FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; 