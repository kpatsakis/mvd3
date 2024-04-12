static int init_input(AVFormatContext *s,const char *filename,AVDictionary **options) int ret ; if ( s -> pb )  if ( s -> iformat && s -> iformat -> flags & 0x1 || ! s -> iformat && ( s -> iformat = av_probe_input_format2 ( & pd , 0 , & score ) ) )  AVInputFormat *av_probe_input_format2(AVProbeData *pd,int is_opened,int *score_max) int score_ret ; AVInputFormat * fmt = av_probe_input_format3 ( pd , is_opened , & score_ret ) ; AVInputFormat *av_probe_input_format3(AVProbeData *pd,int is_opened,int *score_ret) AVProbeData lpd = * pd ; AVInputFormat * fmt1 = ( ( void * ) 0 ) ; AVInputFormat * fmt ; int score ; int nodat = 0 ; int score_max = 0 ; static const uint8_t zerobuffer [ 32 ] ; if ( ! lpd . buf )  lpd . buf = zerobuffer; if ( lpd . buf_size > '\n' && ff_id3v2_match ( lpd . buf , "ID3" ) )  int id3len = ff_id3v2_tag_len ( lpd . buf ) ; if ( lpd . buf_size > id3len + 16 )  lpd . buf += id3len; lpd . buf_size -= id3len; nodat = 1; fmt = ( ( void * ) 0 ); while ( fmt1 = av_iformat_next ( fmt1 ) )  AVInputFormat *av_iformat_next(AVInputFormat *f) if ( f )  return f -> next ; return first_iformat ; if ( ! is_opened == ! ( fmt1 -> flags & 0x1 ) )  score = 0; if ( fmt1 -> read_probe )  score = ( ( fmt1 -> read_probe ) ( & lpd ) ); if ( fmt1 -> extensions && av_match_ext ( lpd . filename , fmt1 -> extensions ) )  int av_match_ext(const char *filename,const char *extensions) const char * ext ; const char * p ; char ext1 [ 32 ] ; char * q ; if ( ! filename )  return 0 ; ext = ( strrchr ( filename , '.' ) ); if ( ext )  ext ++; p = extensions; q = ext1; while ( ( * p ) != '\0' && ( * p ) != ',' && ( q - ext1 ) < sizeof ( ext1 ) - 1 )  * ( q ++ ) = * ( p ++ ); if ( ! av_strcasecmp ( ext1 , ext ) )  return 1 ; if ( ( * p ) == '\0' )  p ++; return 0 ; score = ( score > ( ( nodat ? 100 / 4 - 1 : 1 ) ) ? score : ( ( nodat ? 100 / 4 - 1 : 1 ) ) ); if ( fmt1 -> extensions )  if ( av_match_ext ( lpd . filename , fmt1 -> extensions ) )  int av_match_ext(const char *filename,const char *extensions) const char * ext ; const char * p ; char ext1 [ 32 ] ; char * q ; if ( ! filename )  return 0 ; ext = ( strrchr ( filename , '.' ) ); if ( ext )  ext ++; p = extensions; q = ext1; while ( ( * p ) != '\0' && ( * p ) != ',' && ( q - ext1 ) < sizeof ( ext1 ) - 1 )  * ( q ++ ) = * ( p ++ ); if ( ! av_strcasecmp ( ext1 , ext ) )  return 1 ; if ( ( * p ) == '\0' )  p ++; return 0 ; score = '2'; if ( score > score_max )  score_max = score; fmt = fmt1; if ( score == score_max )  fmt = ( ( void * ) 0 ); return fmt ; if ( score_ret > * score_max )  return fmt ; return ( ( void * ) 0 ) ; if ( ( ret = avio_open2 ( & s -> pb , filename , 1 | s -> avio_flags , ( & s -> interrupt_callback ) , options ) ) < 0 )  if ( s -> iformat )  return av_probe_input_buffer ( s -> pb , & s -> iformat , filename , s , 0 , s -> probesize ) ; int av_probe_input_buffer(AVIOContext *pb,AVInputFormat **fmt,const char *filename,void *logctx,unsigned int offset,unsigned int max_probe_size) uint8_t * mime_type ; if ( ! max_probe_size )  max_probe_size = ( 1 << 20 ); if ( max_probe_size > ( 1 << 20 ) )  max_probe_size = ( 1 << 20 ); if ( max_probe_size < 2048 )  if ( offset >= max_probe_size )  if ( ! ( * fmt ) && pb -> av_class && av_opt_get ( pb , "mime_type" , 0x1 , & mime_type ) >= 0 && mime_type )  if ( ! av_strcasecmp ( mime_type , "audio/aacp" ) )  * fmt = av_find_input_format ( "aac" ); AVInputFormat *av_find_input_format(const char *short_name) AVInputFormat * fmt = ( ( void * ) 0 ) ; while ( fmt = av_iformat_next ( fmt ) )  AVInputFormat *av_iformat_next(AVInputFormat *f) if ( f )  return f -> next ; return first_iformat ; if ( match_format ( short_name , fmt -> name ) )  static int match_format(const char *name,const char *names) int namelen ; if ( ! name || ! names )  namelen = ( strlen ( name ) ); len = ( ( p - names > namelen ? p - names : namelen ) ); if ( ! av_strncasecmp ( name , names , len ) )  