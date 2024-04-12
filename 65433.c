AVInputFormat *av_probe_input_format(AVProbeData *pd,int is_opened) return av_probe_input_format2 ( pd , is_opened , & score ) ; AVInputFormat *av_probe_input_format2(AVProbeData *pd,int is_opened,int *score_max) AVInputFormat * fmt = av_probe_input_format3 ( pd , is_opened , & score_ret ) ; AVInputFormat *av_probe_input_format3(AVProbeData *pd,int is_opened,int *score_ret) AVProbeData lpd = * pd ; AVInputFormat * fmt1 = ( ( void * ) 0 ) ; static const uint8_t zerobuffer [ 32 ] ; if ( ! lpd . buf )  lpd . buf = zerobuffer; if ( lpd . buf_size > '\n' && ff_id3v2_match ( lpd . buf , "ID3" ) )  int id3len = ff_id3v2_tag_len ( lpd . buf ) ; if ( lpd . buf_size > id3len + 16 )  lpd . buf += id3len; lpd . buf_size -= id3len; while ( fmt1 = av_iformat_next ( fmt1 ) )  if ( ! is_opened == ! ( fmt1 -> flags & 0x1 ) )  if ( fmt1 -> read_probe )  if ( fmt1 -> extensions )  if ( av_match_ext ( lpd . filename , fmt1 -> extensions ) )  int av_match_ext(const char *filename,const char *extensions) const char * ext ; if ( ! filename )  ext = ( strrchr ( filename , '.' ) ); if ( ext )  ext ++; if ( ! av_strcasecmp ( ext1 , ext ) )  