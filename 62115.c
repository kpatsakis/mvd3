static void goodG2B() char * password ; password = ""; password = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( password , "Password1234!" ); CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_64b_goodG2BSink ( & password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_64b_goodG2BSink(void * passwordVoidPtr) char * * passwordPtr = ( char * * ) passwordVoidPtr ; char * password = ( * passwordPtr ) ; free ( password ); 