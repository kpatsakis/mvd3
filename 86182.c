static void CVE_2013_1576_VULN_dissect_sdp_media_attribute(tvbuff_t *tvb, packet_info *pinfo, proto_item * ti, int length, transport_info_t *transport_info) gint offset , next_offset , tokenlen , n , colon_offset ; guint8 * attribute_value ; gint sdp_media_attrbute_code ; const char * msrp_res = "msrp://" ; offset = 0; colon_offset = tvb_find_guint8 ( tvb , offset , - 1 , ':' ); if ( colon_offset == - 1 )  tokenlen = colon_offset - offset; sdp_media_attrbute_code = find_sdp_media_attribute_names ( tvb , offset , tokenlen ); offset = colon_offset + 1; offset = tvb_skip_wsp ( tvb , offset , tvb_length_remaining ( tvb , offset ) ); attribute_value = tvb_get_ephemeral_string ( tvb , offset , tvb_length_remaining ( tvb , offset ) ); switch ( sdp_media_attrbute_code )  if ( strncmp ( ( char * ) attribute_value , msrp_res , strlen ( msrp_res ) ) == 0 )  