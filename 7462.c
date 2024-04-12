FILE *get_preset_file(char *filename,size_t filename_size,const char *preset_name,int is_path,const char *codec_name) const char * base [ 3 ] = { ( getenv ( "FFMPEG_DATADIR" ) ) , ( getenv ( "HOME" ) ) , "/opt/stonesoup/workspace/install/share/ffmpeg" } ; for (i = 0; i < 3 && !f; i++) if ( ! base [ i ] )  snprintf ( filename , filename_size , "%s%s/%s.ffpreset" , base [ i ] , ( i != 1 ? "" : "/.ffmpeg" ) , preset_name ); f = fopen ( filename , "r" ); if ( ! f && codec_name )  snprintf ( filename , filename_size , "%s%s/%s-%s.ffpreset" , base [ i ] , ( i != 1 ? "" : "/.ffmpeg" ) , codec_name , preset_name ); f = fopen ( filename , "r" ); return f ; 