void bad() size_t data ; data = 0; data = rand ( ); CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_rand_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_rand_82_bad baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_rand_82_bad::action(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 