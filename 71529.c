void locater_acrothoracica(int unbrakes_firecrackers,char ***************************************************cauterise_dichogamic) unbrakes_firecrackers --; if ( unbrakes_firecrackers > 0 )  locater_acrothoracica ( unbrakes_firecrackers , cauterise_dichogamic ); void locater_acrothoracica(int unbrakes_firecrackers,char ***************************************************cauterise_dichogamic) unbrakes_firecrackers --; if ( unbrakes_firecrackers > 0 )  locater_acrothoracica ( unbrakes_firecrackers , cauterise_dichogamic ); void locater_acrothoracica(int unbrakes_firecrackers,char ***************************************************cauterise_dichogamic) unbrakes_firecrackers --; if ( unbrakes_firecrackers > 0 )  locater_acrothoracica ( unbrakes_firecrackers , cauterise_dichogamic ); void locater_acrothoracica(int unbrakes_firecrackers,char ***************************************************cauterise_dichogamic) char dbconn_str [ 150 ] ; unbrakes_firecrackers --; if ( unbrakes_firecrackers > 0 )  dbhost = getenv ( "DBPGHOST" ); dbuser = getenv ( "DBPGUSER" ); dbpassword = getenv ( "DBPGPASSWORD" ); dbport = getenv ( "DBPGPORT" ); dbdatabase = getenv ( "SS_DBPGDATABASE" ); if ( dbhost != 0 && dbport != 0 && dbuser != 0 && dbpassword != 0 && dbdatabase != 0 )  snprintf ( dbconn_str , 150 , "dbname=%s host=%s user=%s password=%s port=%s" , dbdatabase , dbhost , dbuser , dbpassword , dbport ); conn = PQconnectdb ( dbconn_str ); if ( PQstatus ( conn ) != 0 )  stonesoup_printf ( "%s: %s\n" , "Connection to database failed" , PQerrorMessage ( conn ) ); PQfinish ( conn ); res = PQexec ( conn , query ); if ( PQresultStatus ( res ) != PGRES_COMMAND_OK )  stonesoup_printf ( "%s: %s\n" , "INSERT failed" , PQerrorMessage ( conn ) ); PQclear ( res ); PQfinish ( conn ); stonesoup_result = PQcmdTuples ( res ); stonesoup_printf ( "Query OK, %s rows affected\n" , stonesoup_result ); PQclear ( res ); PQfinish ( conn ); 