void CWE256_Plaintext_Storage_of_Password__w32_char_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; fclose ( pFile ); 