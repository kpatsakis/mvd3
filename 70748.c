void bad() wchar_t * data ; structType myStruct ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 