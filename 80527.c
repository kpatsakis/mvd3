 nestegg_track_video_params(nestegg * ctx, unsigned int nestegg_video_params * params) struct track_entry * entry ; uint64_t value ; memset ( params , 0 , sizeof ( * params ) ); entry = ne_find_track_entry ( ctx , track ); if ( ! entry )  if ( nestegg_track_type ( ctx , track ) != NESTEGG_TRACK_VIDEO )  value = 0; if ( value <= NESTEGG_VIDEO_STEREO_TOP_BOTTOM || value == NESTEGG_VIDEO_STEREO_RIGHT_LEFT )  params -> stereo_mode = value; value = 0; params -> alpha_mode = value; if ( ne_get_uint ( entry -> video . pixel_width , & value ) != 0 )  params -> width = value; if ( ne_get_uint ( entry -> video . pixel_height , & value ) != 0 )  params -> height = value; value = 0; params -> crop_bottom = value; value = 0; params -> crop_top = value; value = 0; params -> crop_left = value; value = 0; params -> crop_right = value; value = params -> width; params -> display_width = value; value = params -> height; ne_get_uint ( entry -> video . display_height , & value ); static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  assert ( type . type == TYPE_UINT ); 