static void goodG2B() char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; strcat ( data , NEW_PATH ); CWE427_Uncontrolled_Search_Path_Element__char_console_52b_goodG2BSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_console_52b_goodG2BSink(char * data) CWE427_Uncontrolled_Search_Path_Element__char_console_52c_goodG2BSink ( data ); void CWE427_Uncontrolled_Search_Path_Element__char_console_52c_goodG2BSink(char * data) PUTENV ( data ); 