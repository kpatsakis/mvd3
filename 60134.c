static void goodG2B() char * data ; char * dataArray [ 5 ] ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__char_console_fprintf_66b_goodG2BSink ( dataArray ); void CWE134_Uncontrolled_Format_String__char_console_fprintf_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; fprintf ( stdout , data ); 