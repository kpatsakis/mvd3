static void goodG2B1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = goodG2B1Source ( data ); static char * goodG2B1Source(char * data) if ( goodG2B1Static )  strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); return data ; HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 