static CVE_2014_6427_PATCHED_is_rtsp_request_or_reply(const guchar *line, size_t linelen, rtsp_type_t *type) const guchar * token , * next_token ; int tokenlen ; gchar response_chars [ 4 ] ; if ( linelen >= 5 && g_ascii_strncasecmp ( "RTSP/" , line , 5 ) == 0 )  tokenlen = get_token_len ( line , line + 5 , & token ); if ( tokenlen != 0 )  tokenlen = get_token_len ( token , line + linelen , & next_token ); if ( tokenlen >= 3 )  memcpy ( response_chars , token , 3 ); response_chars [ 3 ] = '\0'; rtsp_stat_info -> response_code = ( guint ) strtoul ( response_chars , NULL , 10 ); 