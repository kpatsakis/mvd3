static void goodG2B() size_t data ; structType myStruct ; data = 0; data = 20; myStruct . structFirst = data; goodG2BSink ( myStruct ); void goodG2BSink(structType myStruct) size_t data = myStruct . structFirst ; if ( data > wcslen ( HELLO_STRING ) )  