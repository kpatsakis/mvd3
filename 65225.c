enum XML_Status XML_Parse(XML_Parser parser, const char *s, int len, int isFinal) switch ( ps_parsing )  if ( len == 0 )  if ( bufferPtr == bufferEnd )  void * buff = XML_GetBuffer ( parser , len ) ; void * XML_GetBuffer(XML_Parser parser, int len) switch ( ps_parsing )  if ( len > bufferLim - bufferEnd )  int neededSize = len + ( int ) ( bufferEnd - bufferPtr ) ; int keep = ( int ) ( bufferPtr - buffer ) ; if ( keep > XML_CONTEXT_BYTES )  keep = XML_CONTEXT_BYTES; neededSize += keep; if ( neededSize <= bufferLim - buffer )  if ( keep < bufferPtr - buffer )  int offset = ( int ) ( bufferPtr - buffer ) - keep ; memmove ( buffer , & buffer [ offset ] , bufferEnd - bufferPtr + keep ); 