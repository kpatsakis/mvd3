static void goodB2G() TwoIntsClass * data ; data = NULL; CWE762_Mismatched_Memory_Management_Routines__delete_array_class_calloc_84_goodB2G * goodB2GObject = new CWE762_Mismatched_Memory_Management_Routines__delete_array_class_calloc_84_goodB2G ( data ) ; CWE762_Mismatched_Memory_Management_Routines__delete_array_class_calloc_84_goodB2G::CWE762_Mismatched_Memory_Management_Routines__delete_array_class_calloc_84_goodB2G(TwoIntsClass * dataCopy) data = dataCopy; data = ( TwoIntsClass * ) calloc ( 100 , sizeof ( TwoIntsClass ) ); delete goodB2GObject CWE762_Mismatched_Memory_Management_Routines__delete_array_class_calloc_84_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__delete_array_class_calloc_84_goodB2G() free ( data ); 