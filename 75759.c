static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; strcat ( data , "file.txt" ); baseObject -> action ( data ); void CWE23_Relative_Path_Traversal__char_connect_socket_w32CreateFile_82_goodG2B::action(char * data) hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 