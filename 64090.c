 proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  if ( hfinfo -> bitmask )  fill_label_number ( fi , label_str , FALSE ); static fill_label_number(field_info *fi, gchar *label_str, gboolean is_signed) header_field_info * hfinfo = fi -> hfinfo ; guint32 value ; char buf [ 32 ] ; const char * out ; if ( is_signed )  value = fvalue_get_sinteger ( & fi -> value ); value = fvalue_get_uinteger ( & fi -> value ); if ( hfinfo -> display == BASE_CUSTOM )  if ( hfinfo -> strings && hfinfo -> type != FT_FRAMENUM )  const char * val_str = hf_try_val_to_str_const ( value , hfinfo , "Unknown" ) ; out = hfinfo_number_vals_format ( hfinfo , buf , value ); if ( out == NULL )  label_fill_descr ( label_str , 0 , hfinfo , val_str , out ); static label_fill_descr(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text, const char *descr) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); pos = label_concat ( label_str , pos , " (" ); pos = label_concat ( label_str , pos , descr ? descr : "(null)" ); pos = label_concat ( label_str , pos , ")" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) static const char trunc_str [ ] = " [truncated]" ; const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 