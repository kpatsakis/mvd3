static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); baseObject -> action ( data ); void CWE134_Uncontrolled_Format_String__char_file_vfprintf_82_goodG2B::action(char * data) goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 