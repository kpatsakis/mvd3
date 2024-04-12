XML_Parser XML_ExternalEntityParserCreate(XML_Parser const XML_Char const XML_Char *encodingName) XML_Parser parser = oldParser ; DTD * newDtd = NULL ; DTD * oldDtd = _dtd ; if ( ! context )  newDtd = oldDtd; if ( ns )  XML_Char tmp [ 2 ] ; * tmp = namespaceSeparator; parser = parserCreate ( encodingName , & parser -> m_mem , tmp , newDtd ); static parserCreate(const XML_Char const XML_Memory_Handling_Suite const XML_Char DTD *dtd) XML_Parser parser ; if ( memsuite )  parser = ( XML_Parser ) memsuite -> malloc_fcn ( sizeof ( struct XML_ParserStruct ) ); parser = ( XML_Parser ) malloc ( sizeof ( struct XML_ParserStruct ) ); if ( ! parser )  return parser ; attsSize = INIT_ATTS_SIZE; atts = ( ATTRIBUTE * ) MALLOC ( attsSize * sizeof ( ATTRIBUTE ) ); if ( atts == NULL )  return NULL ; dataBuf = ( XML_Char * ) MALLOC ( INIT_DATA_BUF_SIZE * sizeof ( XML_Char ) ); if ( dataBuf == NULL )  return NULL ; if ( dtd )  _dtd = dtdCreate ( & parser -> m_mem ); static DTD dtdCreate(const XML_Memory_Handling_Suite *ms) DTD * p = ( DTD * ) ms -> malloc_fcn ( sizeof ( DTD ) ) ; if ( p == NULL )  return p ; p -> paramEntityRead = XML_FALSE; p -> defaultPrefix . name = NULL; p -> defaultPrefix . binding = NULL; p -> in_eldecl = XML_FALSE; p -> scaffIndex = NULL; p -> scaffold = NULL; p -> scaffLevel = 0; p -> scaffSize = 0; p -> scaffCount = 0; p -> contentStringLen = 0; p -> keepProcessing = XML_TRUE; p -> hasParamEntityRefs = XML_FALSE; p -> standalone = XML_FALSE; return p ; if ( _dtd == NULL )  return NULL ; if ( encodingName && ! protocolEncodingName )  return NULL ; return parser ; parser = parserCreate ( encodingName , & parser -> m_mem , NULL , newDtd ); static parserCreate(const XML_Char const XML_Memory_Handling_Suite const XML_Char DTD *dtd) XML_Parser parser ; if ( memsuite )  parser = ( XML_Parser ) memsuite -> malloc_fcn ( sizeof ( struct XML_ParserStruct ) ); parser = ( XML_Parser ) malloc ( sizeof ( struct XML_ParserStruct ) ); if ( ! parser )  return parser ; attsSize = INIT_ATTS_SIZE; atts = ( ATTRIBUTE * ) MALLOC ( attsSize * sizeof ( ATTRIBUTE ) ); if ( atts == NULL )  return NULL ; dataBuf = ( XML_Char * ) MALLOC ( INIT_DATA_BUF_SIZE * sizeof ( XML_Char ) ); if ( dataBuf == NULL )  return NULL ; if ( dtd )  _dtd = dtdCreate ( & parser -> m_mem ); if ( _dtd == NULL )  return NULL ; if ( encodingName && ! protocolEncodingName )  return NULL ; return parser ; if ( ! parser )  if ( context )  if ( ! dtdCopy ( _dtd , oldDtd , & parser -> m_mem ) || ! setContext ( parser , context ) )  static setContext(XML_Parser parser, const XML_Char *context) DTD * const dtd = _dtd const XML_Char * s = context ; while ( * context != XML_T ( '\0' ) )  if ( * s == CONTEXT_SEP || * s == XML_T ( '\0' ) )  ENTITY * e ; if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  e = ( ENTITY * ) lookup ( & dtd -> generalEntities , poolStart ( & tempPool ) , 0 ); if ( * s != XML_T ( '\0' ) )  s ++; context = s; if ( * s == XML_T ( '=' ) )  PREFIX * prefix ; if ( poolLength ( & tempPool ) == 0 )  prefix = & dtd -> defaultPrefix; if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  prefix = ( PREFIX * ) lookup ( & dtd -> prefixes , poolStart ( & tempPool ) , sizeof ( PREFIX ) ); if ( ! prefix )  if ( prefix -> name == poolStart ( & tempPool ) )  prefix -> name = poolCopyString ( & dtd -> pool , prefix -> name ); static const XML_Char * poolCopyString(STRING_POOL *pool, const XML_Char *s) if ( ! poolAppendChar ( pool , * s ) )  return NULL ; while ( * s ++ )  s = pool -> start; return s ; if ( ! prefix -> name )  for (context = s + *context != CONTEXT_SEP && *context != context++) if ( ! poolAppendChar ( & tempPool , * context ) )  if ( ! poolAppendChar ( & tempPool , XML_T ( '\0' ) ) )  if ( addBinding ( parser , prefix , NULL , poolStart ( & tempPool ) , & inheritedBindings ) != XML_ERROR_NONE )  static enum addBinding(XML_Parser parser, PREFIX *prefix, const ATTRIBUTE_ID const XML_Char *uri, BINDING **bindingsPtr) static const XML_Char xmlNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , 'X' , 'M' , 'L' , '/' , '1' , '9' , '9' , '8' , '/' , 'n' , 'a' , 'm' , 'e' , 's' , 'p' , 'a' , 'c' , 'e' , '\0' } ; static const int xmlLen = ( int ) sizeof ( xmlNamespace ) / sizeof ( XML_Char ) - 1 ; static const XML_Char xmlnsNamespace [ ] = { 'h' , 't' , 't' , 'p' , ':' , '/' , '/' , 'w' , 'w' , 'w' , '.' , 'w' , '3' , '.' , 'o' , 'r' , 'g' , '/' , '2' , '0' , '0' , '0' , '/' , 'x' , 'm' , 'l' , 'n' , 's' , '/' , '\0' } ; static const int xmlnsLen = ( int ) sizeof ( xmlnsNamespace ) / sizeof ( XML_Char ) - 1 ; XML_Bool mustBeXML = XML_FALSE ; XML_Bool isXML = XML_TRUE ; XML_Bool isXMLNS = XML_TRUE ; BINDING * b ; int len ; if ( * uri == XML_T ( '\0' ) && prefix -> name )  return XML_ERROR_UNDECLARING_PREFIX ; if ( prefix -> name && prefix -> name [ 0 ] == XML_T ( 'x' ) && prefix -> name [ 1 ] == XML_T ( 'm' ) && prefix -> name [ 2 ] == XML_T ( 'l' ) )  if ( prefix -> name [ 3 ] == XML_T ( 'n' ) && prefix -> name [ 4 ] == XML_T ( 's' ) && prefix -> name [ 5 ] == XML_T ( '\0' ) )  return XML_ERROR_RESERVED_PREFIX_XMLNS ; if ( prefix -> name [ 3 ] == XML_T ( '\0' ) )  mustBeXML = XML_TRUE; for (len = 0; uri[len]; len++) if ( isXML && ( len > xmlLen || uri [ len ] != xmlNamespace [ len ] ) )  isXML = XML_FALSE; if ( ! mustBeXML && isXMLNS && ( len > xmlnsLen || uri [ len ] != xmlnsNamespace [ len ] ) )  isXMLNS = XML_FALSE; isXML = isXML && len == xmlLen; isXMLNS = isXMLNS && len == xmlnsLen; if ( mustBeXML != isXML )  return mustBeXML ? XML_ERROR_RESERVED_PREFIX_XML : XML_ERROR_RESERVED_NAMESPACE_URI ; if ( isXMLNS )  return XML_ERROR_RESERVED_NAMESPACE_URI ; if ( namespaceSeparator )  len ++; if ( freeBindingList )  b = freeBindingList; if ( len > b -> uriAlloc )  XML_Char * temp = ( XML_Char * ) REALLOC ( b -> uri , sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ) ; if ( temp == NULL )  return XML_ERROR_NO_MEMORY ; b = ( BINDING * ) MALLOC ( sizeof ( BINDING ) ); if ( ! b )  return XML_ERROR_NO_MEMORY ; b -> uri = ( XML_Char * ) MALLOC ( sizeof ( XML_Char ) * ( len + EXPAND_SPARE ) ); if ( ! b -> uri )  return XML_ERROR_NO_MEMORY ; return XML_ERROR_NONE ; s = context; if ( ! poolAppendChar ( & tempPool , * s ) )  s ++; static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) size_t i ; if ( table -> size == 0 )  unsigned long h = hash ( name ) ; unsigned long mask = ( unsigned long ) table -> size - 1 ; unsigned char step = 0 ; i = h & mask; while ( table -> v [ i ] )  if ( keyeq ( name , table -> v [ i ] -> name ) )  if ( ! step )  step = PROBE_STEP ( h , mask , table -> power ); i < step ? ( i += table -> size - step ) : ( i -= step ); if ( ! createSize )  if ( table -> used >> ( table -> power - 1 ) )  unsigned char newPower = table -> power + 1 ; size_t newSize = ( size_t ) 1 << newPower ; size_t tsize = newSize * sizeof ( NAMED * ) ; NAMED * * newV = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ) ; if ( ! newV )  memset ( newV , 0 , tsize ); while ( newV [ j ] )  newV [ j ] = table -> v [ i ]; table -> v = newV; table -> power = newPower; table -> size = newSize; while ( table -> v [ i ] )  table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 