void bad() int64_t * data ; data = NULL; CWE415_Double_Free__malloc_free_int64_t_84_bad * badObject = new CWE415_Double_Free__malloc_free_int64_t_84_bad ( data ) ; CWE415_Double_Free__malloc_free_int64_t_84_bad::CWE415_Double_Free__malloc_free_int64_t_84_bad(int64_t * dataCopy) data = dataCopy; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); free ( data ); delete badObject CWE415_Double_Free__malloc_free_int64_t_84_bad::~CWE415_Double_Free__malloc_free_int64_t_84_bad() free ( data ); 