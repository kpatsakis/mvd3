 nestegg_read_packet(nestegg * ctx, nestegg_packet ** pkt) uint64_t id , size ; * pkt = NULL; r = ne_peek_element ( ctx , & id , & size ); if ( r != 1 )  if ( ne_is_suspend_element ( id ) )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  r = ne_read_block ( ctx , id , size , pkt ); if ( r != 1 )  if ( id != ID_SIMPLE_BLOCK )  r = ne_read_block_duration ( ctx , * pkt ); r = ne_parse ( ctx , NULL , - 1 ); if ( r != 1 )  static ne_read_block_duration(nestegg * ctx, nestegg_packet * pkt) int r ; uint64_t id , size ; struct ebml_element_desc * element ; r = ne_peek_element ( ctx , & id , & size ); static ne_peek_element(nestegg * ctx, uint64_t * id, uint64_t * size) int r ; if ( ctx -> last_valid )  return 1 ; r = ne_read_id ( ctx -> io , & ctx -> last_id , NULL ); if ( r != 1 )  return r ; r = ne_read_vint ( ctx -> io , & ctx -> last_size , NULL ); if ( r != 1 )  return r ; return 1 ; if ( r != 1 )  if ( id != ID_BLOCK_DURATION )  element = ne_find_element ( id , ctx -> ancestor -> node ); static struct ebml_element_desc ne_find_element(uint64_t id, struct ebml_element_desc * elements) struct ebml_element_desc * element ; for (element = elements; element->id; ++element) if ( element -> id == id )  return element ; return NULL ; if ( ! element )  r = ne_read_simple ( ctx , element , size ); static ne_read_simple(nestegg * ctx, struct ebml_element_desc * desc, size_t length) struct ebml_type * storage ; storage = ( struct ebml_type * ) ( ctx -> ancestor -> data + desc -> offset ); if ( storage -> read )  switch ( desc -> type )  assert ( 0 ); 