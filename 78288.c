static void good1() if ( STATIC_CONST_FALSE )  wchar_t * filename ; wchar_t tmpl [ ] = L "goodXXXXXX" FILE * pFile ; filename = MKTEMP ( tmpl ); if ( filename != NULL )  pFile = FOPEN ( filename , L "w" ) if ( pFile != NULL )  fprintf ( pFile , "Temporary file" ); fclose ( pFile ); 