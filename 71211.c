void CWE327_Use_Broken_Crypto__w32_3DES_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; FILE * pFile ; pFile = fopen ( "encrypted.txt" , "rb" ); if ( pFile == NULL )  if ( fread ( toBeDecrypted , sizeof ( char ) , 100 , pFile ) != 100 )  fclose ( pFile ); if ( pFile )  fclose ( pFile ); 