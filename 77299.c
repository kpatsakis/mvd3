static void goodG2B() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; char * data = * dataPtr1 ; strcat ( data , "file.txt" ); * dataPtr1 = data; hFile = CreateFileA ( data , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( hFile != INVALID_HANDLE_VALUE )  CloseHandle ( hFile ); 