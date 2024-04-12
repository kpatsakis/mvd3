void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode) const char * codec_type ; const char * codec_name ; const char * profile = NULL ; const AVCodec * p ; if ( ! buf || buf_size <= 0 )  codec_type = av_get_media_type_string ( enc -> codec_type ); codec_name = avcodec_get_name ( enc -> codec_id ); const char *avcodec_get_name(enum AVCodecID id) const AVCodecDescriptor * cd ; AVCodec * codec ; if ( id == AV_CODEC_ID_NONE )  return "none" ; cd = avcodec_descriptor_get ( id ); if ( cd )  return cd -> name ; codec = avcodec_find_decoder ( id ); AVCodec *avcodec_find_decoder(enum AVCodecID id) return find_encdec ( id , 0 ) ; static AVCodec *find_encdec(enum AVCodecID id, int encoder) AVCodec * p , * experimental = NULL ; p = first_avcodec; id = remap_deprecated_codec_id ( id ); static enum AVCodecID remap_deprecated_codec_id(enum AVCodecID id) switch ( id )  return AV_CODEC_ID_BRENDER_PIX ; return AV_CODEC_ID_OPUS ; return AV_CODEC_ID_TAK ; return AV_CODEC_ID_PAF_AUDIO ; return AV_CODEC_ID_PCM_S16BE_PLANAR ; return AV_CODEC_ID_PCM_S24LE_PLANAR ; return AV_CODEC_ID_PCM_S32LE_PLANAR ; return AV_CODEC_ID_ADPCM_VIMA ; return AV_CODEC_ID_ESCAPE130 ; return AV_CODEC_ID_EXR ; return AV_CODEC_ID_G2M ; return AV_CODEC_ID_PAF_VIDEO ; return AV_CODEC_ID_WEBP ; return AV_CODEC_ID_HEVC ; return AV_CODEC_ID_MVC1 ; return AV_CODEC_ID_MVC2 ; return AV_CODEC_ID_SANM ; return AV_CODEC_ID_SGIRLE ; return AV_CODEC_ID_VP7 ; return id ; while ( p )  if ( ( encoder ? av_codec_is_encoder ( p ) : av_codec_is_decoder ( p ) ) && p -> id == id )  int av_codec_is_decoder(const AVCodec *codec) return codec && codec -> decode ; int av_codec_is_encoder(const AVCodec *codec) return codec && ( codec -> encode_sub || codec -> encode2 ) ; if ( p -> capabilities & AV_CODEC_CAP_EXPERIMENTAL && ! experimental )  experimental = p; return p ; p = p -> next; return experimental ; if ( codec )  return codec -> name ; codec = avcodec_find_encoder ( id ); AVCodec *avcodec_find_encoder(enum AVCodecID id) return find_encdec ( id , 1 ) ; static AVCodec *find_encdec(enum AVCodecID id, int encoder) AVCodec * p , * experimental = NULL ; p = first_avcodec; id = remap_deprecated_codec_id ( id ); while ( p )  if ( ( encoder ? av_codec_is_encoder ( p ) : av_codec_is_decoder ( p ) ) && p -> id == id )  if ( p -> capabilities & AV_CODEC_CAP_EXPERIMENTAL && ! experimental )  experimental = p; return p ; p = p -> next; return experimental ; if ( codec )  return codec -> name ; return "unknown_codec" ; if ( enc -> profile != FF_PROFILE_UNKNOWN )  if ( enc -> codec )  p = enc -> codec; p = encode ? avcodec_find_encoder ( enc -> codec_id ) : avcodec_find_decoder ( enc -> codec_id ); AVCodec *avcodec_find_decoder(enum AVCodecID id) return find_encdec ( id , 0 ) ; AVCodec *avcodec_find_encoder(enum AVCodecID id) return find_encdec ( id , 1 ) ; if ( p )  profile = av_get_profile_name ( p , enc -> profile ); const char *av_get_profile_name(const AVCodec *codec, int profile) const AVProfile * p ; if ( profile == FF_PROFILE_UNKNOWN || ! codec -> profiles )  return NULL ; for (p = codec->profiles; p->profile != FF_PROFILE_UNKNOWN; p++) if ( p -> profile == profile )  return p -> name ; return NULL ; snprintf ( buf , buf_size , "%s: %s" , codec_type ? codec_type : "unknown" , codec_name ); buf [ 0 ] ^= 'a' ^ 'A'; if ( enc -> codec && strcmp ( enc -> codec -> name , codec_name ) )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%s)" , enc -> codec -> name ); if ( profile )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%s)" , profile ); if ( enc -> codec_type == AVMEDIA_TYPE_VIDEO && av_log_get_level ( ) >= AV_LOG_VERBOSE && enc -> refs )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d reference frame%s" , enc -> refs , enc -> refs > 1 ? "s" : "" ); if ( enc -> codec_tag )  char tag_buf [ 32 ] ; snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%s / 0x%04X)" , tag_buf , enc -> codec_tag ); av_strlcat ( buf , separator , buf_size ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , "%s" , enc -> pix_fmt == AV_PIX_FMT_NONE ? "none" : av_get_pix_fmt_name ( enc -> pix_fmt ) ); av_strlcatf ( buf , buf_size , "%s)" , detail ); av_strlcat ( buf , new_line ? separator : ", " , buf_size ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , "%dx%d" , enc -> width , enc -> height ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%dx%d)" , enc -> coded_width , enc -> coded_height ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " [SAR %d:%d DAR %d:%d]" , enc -> sample_aspect_ratio . num , enc -> sample_aspect_ratio . den , display_aspect_ratio . num , display_aspect_ratio . den ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d/%d" , enc -> time_base . num / g , enc -> time_base . den / g ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", q=%d-%d" , enc -> qmin , enc -> qmax ); 