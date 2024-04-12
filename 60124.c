static void CVE_2013_1576_VULN_dissect_sdp_media_attribute(tvbuff_t *tvb, packet_info *pinfo, proto_item * ti, int length, transport_info_t *transport_info) proto_tree * sdp_media_attribute_tree , * parameter_item ; gint offset , next_offset , tokenlen , n , colon_offset ; guint8 * payload_type ; guint8 * attribute_value ; guint8 pt ; gint sdp_media_attrbute_code ; const char * msrp_res = "msrp://" ; gboolean has_more_pars = TRUE ; offset = 0; sdp_media_attribute_tree = proto_item_add_subtree ( ti , ett_sdp_media_attribute ); colon_offset = tvb_find_guint8 ( tvb , offset , - 1 , ':' ); if ( colon_offset == - 1 )  tokenlen = colon_offset - offset; sdp_media_attrbute_code = find_sdp_media_attribute_names ( tvb , offset , tokenlen ); offset = colon_offset + 1; offset = tvb_skip_wsp ( tvb , offset , tvb_length_remaining ( tvb , offset ) ); attribute_value = tvb_get_ephemeral_string ( tvb , offset , tvb_length_remaining ( tvb , offset ) ); switch ( sdp_media_attrbute_code )  next_offset = tvb_find_guint8 ( tvb , offset , - 1 , ' ' ); if ( next_offset == - 1 )  tokenlen = next_offset - offset; payload_type = tvb_get_ephemeral_string ( tvb , offset , tokenlen ); offset = next_offset + 1; next_offset = tvb_find_guint8 ( tvb , offset , - 1 , '/' ); if ( next_offset == - 1 )  tokenlen = next_offset - offset; pt = atoi ( ( char * ) payload_type ); if ( pt >= SDP_NO_OF_PT )  next_offset = next_offset + 1; offset = next_offset; while ( length - 1 >= next_offset )  if ( ! isdigit ( tvb_get_guint8 ( tvb , next_offset ) ) )  next_offset ++; tokenlen = next_offset - offset; if ( sdp_media_attribute_tree )  guint8 media_format ; offset = tvb_skip_wsp ( tvb , offset , tvb_length_remaining ( tvb , offset ) ); next_offset = tvb_find_guint8 ( tvb , offset , - 1 , ' ' ); if ( next_offset == - 1 )  tokenlen = next_offset - offset; media_format = atoi ( ( char * ) tvb_get_ephemeral_string ( tvb , offset , tokenlen ) ); if ( media_format >= SDP_NO_OF_PT )  offset = next_offset + 1; while ( has_more_pars == TRUE )  next_offset = tvb_find_guint8 ( tvb , offset , - 1 , ';' ); offset = tvb_skip_wsp ( tvb , offset , tvb_length_remaining ( tvb , offset ) ); if ( next_offset == - 1 )  has_more_pars = FALSE; next_offset = tvb_length ( tvb ); offset = next_offset + 1; if ( strncmp ( ( char * ) attribute_value , msrp_res , strlen ( msrp_res ) ) == 0 )  int address_offset , port_offset , port_end_offset ; address_offset = offset + ( int ) strlen ( msrp_res ); port_offset = tvb_find_guint8 ( tvb , address_offset , - 1 , ':' ); if ( port_offset != - 1 )  port_end_offset = tvb_find_guint8 ( tvb , port_offset , - 1 , '/' ); if ( inet_pton ( AF_INET , ( char * ) tvb_get_ephemeral_string ( tvb , address_offset , port_offset - address_offset ) , & msrp_ipaddr ) > 0 )  msrp_port_number = atoi ( ( char * ) tvb_get_ephemeral_string ( tvb , port_offset + 1 , port_end_offset - port_offset - 1 ) ); 