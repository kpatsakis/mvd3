void CWE459_Incomplete_Cleanup__wchar_t_10_bad() if ( globalTrue )  wchar_t * filename ; wchar_t tmpl [ ] = L "badXXXXXX" FILE * pFile ; filename = MKTEMP ( tmpl ); if ( filename != NULL )  pFile = FOPEN ( filename , L "w" ) if ( pFile != NULL )  fprintf ( pFile , "Temporary file" ); fclose ( pFile ); 