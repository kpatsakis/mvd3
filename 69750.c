 ber_set_filename(gchar *filename) gchar * ptr ; if ( ber_filename )  ber_filename = NULL; if ( filename )  ber_filename = g_strdup ( filename ); if ( ( ptr = strrchr ( ber_filename , '.' ) ) != NULL )  ber_decode_as ( get_ber_oid_syntax ( ptr ) ); static const gchar get_ber_oid_syntax(const char *oid) return ( const char * ) g_hash_table_lookup ( syntax_table , oid ) ;  ber_decode_as(const gchar *syntax) if ( syntax )  decode_as_syntax = g_strdup ( syntax ); 