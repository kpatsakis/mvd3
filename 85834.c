void bad() char * password ; password = ""; CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_84_bad * badObject = new CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_84_bad ( password ) ; CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_84_bad::CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_84_bad(char * passwordCopy) password = passwordCopy; password = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( password == NULL )  printLine ( "Memory could not be allocated" ); exit ( 1 ); strcpy ( password , "Password1234!" ); delete badObject CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_84_bad::~CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_84_bad() free ( password ); 