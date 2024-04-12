static proto_item _proto_tree_add_bits_ret_val(proto_tree *tree, const int hfindex, tvbuff_t const guint bit_offset, const gint guint64 *return_value, const guint encoding) gint offset ; guint length ; guint8 tot_no_bits ; char lbl_str [ ITEM_LABEL_LENGTH ] ; proto_item * pi ; header_field_info * hf_field ; offset = bit_offset >> 3; tot_no_bits = ( ( bit_offset & 0x7 ) + no_of_bits ); length = ( tot_no_bits + 7 ) >> 3; if ( no_of_bits < 65 )  value = tvb_get_bits64 ( tvb , bit_offset , no_of_bits , encoding ); switch ( hf_field -> type )  value = ws_sign_ext64 ( value , no_of_bits ); switch ( hf_field -> type )  pi = proto_tree_add_uint ( tree , hfindex , tvb , offset , length , ( guint32 ) value ); pi = proto_tree_add_int ( tree , hfindex , tvb , offset , length , ( gint32 ) value ); pi = proto_tree_add_uint64 ( tree , hfindex , tvb , offset , length , value ); pi = proto_tree_add_int64 ( tree , hfindex , tvb , offset , length , ( gint64 ) value ); fill_label_number64 ( PITEM_FINFO ( pi ) , lbl_str , TRUE ); static fill_label_number64(field_info *fi, gchar *label_str, gboolean is_signed) header_field_info * hfinfo = fi -> hfinfo ; guint64 value ; char buf [ 48 ] ; const char * out ; if ( is_signed )  value = fvalue_get_sinteger64 ( & fi -> value ); value = fvalue_get_uinteger64 ( & fi -> value ); if ( hfinfo -> display == BASE_CUSTOM )  if ( hfinfo -> strings )  const char * val_str = hf_try_val64_to_str_const ( value , hfinfo , "Unknown" ) ; out = hfinfo_number_vals_format64 ( hfinfo , buf , value ); if ( out == NULL )  label_fill ( label_str , 0 , hfinfo , val_str ); static label_fill(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) static const char trunc_str [ ] = " [truncated]" ; const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 