static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "hostname" ); CWE15_External_Control_of_System_or_Configuration_Setting__w32_64b_goodG2BSink ( & data ); void CWE15_External_Control_of_System_or_Configuration_Setting__w32_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; if ( ! SetComputerNameA ( data ) )  