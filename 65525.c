static storeRawNames(XML_Parser parser) TAG * tag = tagStack ; while ( tag )  int bufSize ; int nameLen = sizeof ( XML_Char ) * ( tag -> name . strLen + 1 ) ; char * rawNameBuf = tag -> buf + nameLen ; if ( tag -> rawName == rawNameBuf )  bufSize = nameLen + ROUND_UP ( tag -> rawNameLength , sizeof ( XML_Char ) ); if ( bufSize > tag -> bufEnd - tag -> buf )  char * temp = ( char * ) REALLOC ( tag -> buf , bufSize ) ; if ( temp == NULL )  if ( tag -> name . str == ( XML_Char * ) tag -> buf )  tag -> name . str = ( XML_Char * ) temp; if ( tag -> name . localPart )  tag -> name . localPart = ( XML_Char * ) temp + ( tag -> name . localPart - ( XML_Char * ) tag -> buf ); tag -> buf = temp; tag -> bufEnd = temp + bufSize; rawNameBuf = temp + nameLen; memcpy ( rawNameBuf , tag -> rawName , tag -> rawNameLength ); tag -> rawName = rawNameBuf; tag = tag -> parent; 