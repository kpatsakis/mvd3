static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticTrue )  FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; 