void CWE123_Write_What_Where_Condition__fgets_63_bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; if ( fgets ( ( char * ) & data , sizeof ( data ) , stdin ) == NULL )  CWE123_Write_What_Where_Condition__fgets_63b_badSink ( & data ); void CWE123_Write_What_Where_Condition__fgets_63b_badSink(badStruct * dataPtr) badStruct data = * dataPtr ; linkedListPrev = data . list . prev; linkedListNext = data . list . next; linkedListPrev -> next = linkedListNext; linkedListNext -> prev = linkedListPrev; 