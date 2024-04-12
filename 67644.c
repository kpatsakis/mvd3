static rlc_am_reassemble(tvbuff_t *tvb, guint8 offs, packet_info proto_tree *tree, proto_tree enum rlc_channel_type channel, guint16 seq, gboolean poll_set, struct rlc_li guint16 num_li, gboolean final, gboolean li_is_on_2_bytes) guint8 i ; for (i = 0; i < num_li; i++) if ( ( ! li_is_on_2_bytes && ( li [ i ] . li == 0x7e ) ) || ( li [ i ] . li == 0x7ffe ) )  if ( ( ! li_is_on_2_bytes && ( li [ i ] . li == 0x7f ) ) || ( li [ i ] . li == 0x7fff ) )  if ( tvb_reported_length_remaining ( tvb , offs ) > 0 )  if ( i == 0 )  add_fragment ( RLC_AM , tvb , pinfo , li [ i ] . tree , offs , seq , i , 0 , TRUE ); offs += tvb_captured_length_remaining ( tvb , offs ); offs += li [ i ] . len; static struct rlc_frag add_fragment(enum rlc_mode mode, tvbuff_t *tvb, packet_info proto_tree *tree, guint16 offset, guint16 seq, guint16 guint16 len, gboolean final) struct rlc_channel ch_lookup ; int snmod ; if ( rlc_channel_assign ( & ch_lookup , mode , pinfo ) == - 1 )  snmod = getChannelSNModulus ( & ch_lookup ); if ( g_hash_table_lookup_extended ( reassembled_table , & frag_lookup , & orig_key , & value ) )  frags = get_frags ( pinfo , & ch_lookup ); endlist = get_endlist ( pinfo , & ch_lookup ); if ( pinfo -> fd -> flags . visited )  if ( tree && len > 0 )  if ( endlist -> list && endlist -> list -> next )  gint16 start = ( GPOINTER_TO_INT ( endlist -> list -> data ) + 1 ) % snmod ; gint16 end = GPOINTER_TO_INT ( endlist -> list -> next -> data ) ; gint16 missing = start ; gboolean wecanreasmmore = TRUE ; for (; moduloCompare(missing,end,snmod ) <= 0; missing = (missing+1)%snmod) if ( frags [ missing ] == NULL )  wecanreasmmore = FALSE; if ( wecanreasmmore )  reassemble_sequence ( frags , endlist , & ch_lookup , start , end ); static reassemble_sequence(struct rlc_frag ** frags, struct rlc_seqlist * struct rlc_channel * ch_lookup, guint16 start, guint16 end) struct rlc_sdu * sdu = rlc_sdu_create ( ) ; reassemble_data ( ch_lookup , sdu , NULL ); static reassemble_data(struct rlc_channel *ch, struct rlc_sdu *sdu, struct rlc_frag *frag) struct rlc_frag * temp ; guint16 offs = 0 ; if ( ! sdu || ! ch || ! sdu -> frags )  if ( sdu -> data )  if ( frag )  sdu -> reassembled_in = frag; sdu -> reassembled_in = sdu -> last; sdu -> data = ( guint8 * ) wmem_alloc ( wmem_file_scope ( ) , sdu -> len ); temp = sdu -> frags; while ( temp && ( ( offs + temp -> len ) <= sdu -> len ) )  memcpy ( sdu -> data + offs , temp -> data , temp -> len ); temp -> data = NULL; g_hash_table_insert ( reassembled_table , temp , sdu ); offs += temp -> len; temp = temp -> next; 