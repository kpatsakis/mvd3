static proto_item_add_bitmask_tree(proto_item *item, tvbuff_t *tvb, const int const int len, const gint ett, const int const guint encoding, const int gboolean first, gboolean use_parent_tree, gboolean proto_tree* tree, guint64 value) guint64 available_bits = 0 ; guint64 tmpval ; header_field_info * hf ; switch ( len )  if ( use_value == FALSE )  value = tvb_get_guint8 ( tvb , offset ); available_bits = 0xFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letohs ( tvb , offset ) : tvb_get_ntohs ( tvb , offset ); available_bits = 0xFFFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letoh24 ( tvb , offset ) : tvb_get_ntoh24 ( tvb , offset ); available_bits = 0xFFFFFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letohl ( tvb , offset ) : tvb_get_ntohl ( tvb , offset ); available_bits = 0xFFFFFFFF; if ( use_value == FALSE )  value = encoding ? tvb_get_letoh40 ( tvb , offset ) : tvb_get_ntoh40 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFF ); if ( use_value == FALSE )  value = encoding ? tvb_get_letoh48 ( tvb , offset ) : tvb_get_ntoh48 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFFFF ); if ( use_value == FALSE )  value = encoding ? tvb_get_letoh56 ( tvb , offset ) : tvb_get_ntoh56 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFFFFFF ); if ( use_value == FALSE )  value = encoding ? tvb_get_letoh64 ( tvb , offset ) : tvb_get_ntoh64 ( tvb , offset ); available_bits = G_GUINT64_CONSTANT ( 0xFFFFFFFFFFFFFFFF ); while ( * fields )  guint64 present_bits ; present_bits = available_bits & hf -> bitmask; if ( present_bits != hf -> bitmask )  fields ++; if ( flags & BMT_NO_APPEND )  fields ++; tmpval = ( value & hf -> bitmask ) >> hfinfo_bitshift ( hf ); switch ( hf -> type )  if ( hf -> display == BASE_CUSTOM )  first = FALSE; if ( hf -> strings )  first = FALSE; if ( ! ( flags & BMT_NO_INT ) )  first = FALSE; if ( hf -> strings && ! ( flags & BMT_NO_TFS ) )  if ( tmpval )  first = FALSE; if ( ! ( flags & BMT_NO_FALSE ) )  first = FALSE; if ( hf -> bitmask & value )  proto_item_append_text ( item , "%s%s" , first ? "" : ", " , hf -> name ); first = FALSE; fields ++;  proto_item_append_text(proto_item *pi, const char *format, ...) fi = PITEM_FINFO ( pi ); if ( fi == NULL )  if ( ! PROTO_ITEM_IS_HIDDEN ( pi ) )  if ( fi -> rep == NULL )  proto_item_fill_label ( fi , fi -> rep -> representation );  proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; guint8 * bytes ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); bytes = ( guint8 * ) fvalue_get ( & fi -> value ); label_fill ( label_str , 0 , hfinfo , hfinfo_format_text ( hfinfo , bytes ) ); static const char hfinfo_format_text(const header_field_info *hfinfo, const guchar *string) switch ( hfinfo -> display )  return format_text ( string , strlen ( string ) ) ; 