void redeposition_rowdyism(int lectureproof_phoenician,peonisms_sweetbriar tli_dicynodon) yodler_irritate ( lectureproof_phoenician , tli_dicynodon ); void yodler_irritate(int electricans_nonlitigation,peonisms_sweetbriar hornersville_kibitzed) electricans_nonlitigation --; if ( electricans_nonlitigation > 0 )  redeposition_rowdyism ( electricans_nonlitigation , hornersville_kibitzed ); void redeposition_rowdyism(int lectureproof_phoenician,peonisms_sweetbriar tli_dicynodon) yodler_irritate ( lectureproof_phoenician , tli_dicynodon ); void yodler_irritate(int electricans_nonlitigation,peonisms_sweetbriar hornersville_kibitzed) electricans_nonlitigation --; if ( electricans_nonlitigation > 0 )  dbpassword = getenv ( "DBPGPASSWORD" ); tracepoint ( stonesoup_trace , variable_buffer , "dbpassword" , dbpassword , "INITIAL-STATE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  stonesoup_printf ( "%s: %s\n" , "INSERT failed" , PQerrorMessage ( conn ) ); PQclear ( res ); PQfinish ( conn ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); PQclear ( res ); PQfinish ( conn ); 