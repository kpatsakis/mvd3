static void *accept_thread(void *ignore) int as ; socklen_t sinlen ; struct protoent * p ; sinlen = sizeof ( sin ); as = accept ( skinnysock , ( struct sockaddr * ) & sin , & sinlen ); if ( as < 0 )  if ( ast_atomic_fetchadd_int ( & unauth_sessions , + 1 ) >= auth_limit )  p = getprotobyname ( "tcp" ); if ( p )  if ( setsockopt ( as , p -> p_proto , TCP_NODELAY , ( char * ) & arg , sizeof ( arg ) ) < 0 )  ast_log ( LOG_WARNING , "Failed to set Skinny tcp connection to TCP_NODELAY mode: %s\n" , strerror ( errno ) ); 