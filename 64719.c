static void goodG2B() FILE * data ; data = NULL; CWE675_Duplicate_Operations_on_Resource__freopen_84_goodG2B * goodG2BObject = new CWE675_Duplicate_Operations_on_Resource__freopen_84_goodG2B ( data ) ; CWE675_Duplicate_Operations_on_Resource__freopen_84_goodG2B::CWE675_Duplicate_Operations_on_Resource__freopen_84_goodG2B(FILE * dataCopy) data = dataCopy; data = fopen ( "GoodSource_fopen.txt" , "w+" ); delete goodG2BObject CWE675_Duplicate_Operations_on_Resource__freopen_84_goodG2B::~CWE675_Duplicate_Operations_on_Resource__freopen_84_goodG2B() fclose ( data ); 