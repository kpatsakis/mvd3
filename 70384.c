void CWE459_Incomplete_Cleanup__wchar_t_18_bad() wchar_t * filename ; wchar_t tmpl [ ] = L "badXXXXXX" FILE * pFile ; filename = MKTEMP ( tmpl ); if ( filename != NULL )  pFile = FOPEN ( filename , L "w" ) if ( pFile != NULL )  fprintf ( pFile , "Temporary file" ); fclose ( pFile ); 