static void goodG2B1() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; strcat ( data , "c:\\temp\\file.txt" ); hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 