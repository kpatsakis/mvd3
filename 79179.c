static void pgstat_send_funcstats() static const PgStat_FunctionCounts all_zeroes ; PgStat_MsgFuncstat msg ; PgStat_BackendFunctionEntry * entry ; if ( pgStatFunctions == ( ( void * ) 0 ) )  msg . m_databaseid = MyDatabaseId; msg . m_nentries = 0; while ( ( entry = ( ( PgStat_BackendFunctionEntry * ) ( hash_seq_search ( & fstat ) ) ) ) != ( ( void * ) 0 ) )  if ( memcmp ( ( & entry -> f_counts ) , ( & all_zeroes ) , sizeof ( PgStat_FunctionCounts ) ) == 0 )  if ( ( ++ msg . m_nentries ) >= ( 1000 - sizeof ( PgStat_MsgHdr ) - sizeof ( Oid ) - sizeof ( int ) ) / sizeof ( PgStat_FunctionEntry ) )  pgstat_send ( ( & msg ) , ( ( ( size_t ) ( & ( ( PgStat_MsgFuncstat * ) 0 ) -> m_entry [ 0 ] ) ) + msg . m_nentries * sizeof ( PgStat_FunctionEntry ) ) ); msg . m_nentries = 0; static void pgstat_send(void *msg,int len) int rc ; if ( pgStatSock == - 1 )  ( ( PgStat_MsgHdr * ) msg ) -> m_size = len; rc = ( send ( pgStatSock , msg , len , 0 ) ); while ( rc < 0 && * __errno_location ( ) == 4 )  