 nestegg_track_codec_data(nestegg * ctx, unsigned int track, unsigned int unsigned char ** data, size_t * length) struct track_entry * entry ; struct ebml_binary codec_private ; entry = ne_find_track_entry ( ctx , track ); static struct track_entry ne_find_track_entry(nestegg * ctx, unsigned int track) struct ebml_list_node * node ; unsigned int tracks = 0 ; node = ctx -> segment . tracks . track_entry . head; while ( node )  if ( track == tracks )  return node -> data ; tracks += 1; node = node -> next; return NULL ; if ( ! entry )  if ( nestegg_track_codec_id ( ctx , track ) != NESTEGG_CODEC_VORBIS && nestegg_track_codec_id ( ctx , track ) != NESTEGG_CODEC_OPUS )  if ( ne_get_binary ( entry -> codec_private , & codec_private ) != 0 )  static ne_get_binary(struct ebml_type type, struct ebml_binary * value) if ( ! type . read )  return - 1 ; return 0 ; if ( nestegg_track_codec_id ( ctx , track ) == NESTEGG_CODEC_VORBIS )   nestegg_track_codec_id(nestegg * ctx, unsigned int track) char * codec_id ; struct track_entry * entry ; entry = ne_find_track_entry ( ctx , track ); static struct track_entry ne_find_track_entry(nestegg * ctx, unsigned int track) struct ebml_list_node * node ; unsigned int tracks = 0 ; node = ctx -> segment . tracks . track_entry . head; while ( node )  if ( track == tracks )  return node -> data ; tracks += 1; node = node -> next; return NULL ; if ( ! entry )  if ( ne_get_string ( entry -> codec_id , & codec_id ) != 0 )  static ne_get_string(struct ebml_type type, char ** value) if ( ! type . read )  assert ( type . type == TYPE_STRING ); 