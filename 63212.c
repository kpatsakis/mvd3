XML_Parser XML_ExternalEntityParserCreate(XML_Parser const XML_Char const XML_Char *encodingName) XML_Parser parser = oldParser ; DTD * newDtd = NULL ; DTD * oldDtd = _dtd ; if ( ! context )  newDtd = oldDtd; if ( ns )  XML_Char tmp [ 2 ] ; * tmp = namespaceSeparator; parser = parserCreate ( encodingName , & parser -> m_mem , tmp , newDtd ); parser = parserCreate ( encodingName , & parser -> m_mem , NULL , newDtd ); if ( ! parser )  if ( context )  if ( ! dtdCopy ( _dtd , oldDtd , & parser -> m_mem ) || ! setContext ( parser , context ) )  static dtdCopy(DTD *newDtd, const DTD *oldDtd, const XML_Memory_Handling_Suite *ms) const XML_Char * name ; const PREFIX * oldP = ( PREFIX * ) hashTableIterNext ( & iter ) ; if ( ! oldP )  name = poolCopyString ( & ( newDtd -> pool ) , oldP -> name ); if ( ! name )  if ( ! lookup ( & ( newDtd -> prefixes ) , name , sizeof ( PREFIX ) ) )  ATTRIBUTE_ID * newA ; const XML_Char * name ; const ATTRIBUTE_ID * oldA = ( ATTRIBUTE_ID * ) hashTableIterNext ( & iter ) ; if ( ! oldA )  if ( ! poolAppendChar ( & ( newDtd -> pool ) , XML_T ( '\0' ) ) )  name = poolCopyString ( & ( newDtd -> pool ) , oldA -> name ); if ( ! name )  newA = ( ATTRIBUTE_ID * ) lookup ( & ( newDtd -> attributeIds ) , name , sizeof ( ATTRIBUTE_ID ) ); if ( ! newA )  int i ; ELEMENT_TYPE * newE ; const XML_Char * name ; const ELEMENT_TYPE * oldE = ( ELEMENT_TYPE * ) hashTableIterNext ( & iter ) ; if ( ! oldE )  name = poolCopyString ( & ( newDtd -> pool ) , oldE -> name ); if ( ! name )  newE = ( ELEMENT_TYPE * ) lookup ( & ( newDtd -> elementTypes ) , name , sizeof ( ELEMENT_TYPE ) ); if ( ! newE )  if ( oldE -> nDefaultAtts )  newE -> defaultAtts = ( DEFAULT_ATTRIBUTE * ) ms -> malloc_fcn ( oldE -> nDefaultAtts * sizeof ( DEFAULT_ATTRIBUTE ) ); if ( ! newE -> defaultAtts )  if ( oldE -> idAtt )  newE -> idAtt = ( ATTRIBUTE_ID * ) lookup ( & ( newDtd -> attributeIds ) , oldE -> idAtt -> name , 0 ); newE -> allocDefaultAtts = newE -> nDefaultAtts = oldE -> nDefaultAtts; if ( oldE -> prefix )  newE -> prefix = ( PREFIX * ) lookup ( & ( newDtd -> prefixes ) , oldE -> prefix -> name , 0 ); for (i = 0; i < newE->nDefaultAtts; i++) newE -> defaultAtts [ i ] . id = ( ATTRIBUTE_ID * ) lookup ( & ( newDtd -> attributeIds ) , oldE -> defaultAtts [ i ] . id -> name , 0 ); newE -> defaultAtts [ i ] . isCdata = oldE -> defaultAtts [ i ] . isCdata; if ( oldE -> defaultAtts [ i ] . value )  newE -> defaultAtts [ i ] . value = poolCopyString ( & ( newDtd -> pool ) , oldE -> defaultAtts [ i ] . value ); if ( ! newE -> defaultAtts [ i ] . value )  newE -> defaultAtts [ i ] . value = NULL; static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) if ( table -> size == 0 )  size_t tsize ; if ( ! createSize )  table -> power = INIT_POWER; table -> size = ( size_t ) 1 << INIT_POWER; tsize = table -> size * sizeof ( NAMED * ); table -> v = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ); if ( ! table -> v )  memset ( table -> v , 0 , tsize ); i = hash ( name ) & ( ( unsigned long ) table -> size - 1 ); table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 