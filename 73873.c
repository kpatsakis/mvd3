void parse_dir_colors() char * * arg ; char * * c ; char * colors ; char * s ; int i ; struct extensions * e ; if ( Hflag )  if ( getenv ( "TERM" ) == ( ( void * ) 0 ) )  s = getenv ( "TREE_COLORS" ); if ( s == ( ( void * ) 0 ) )  s = getenv ( "LS_COLORS" ); if ( ( s == ( ( void * ) 0 ) || strlen ( s ) == 0 ) && force_color )  s = ":no=00:fi=00:di=01;34:ln=01;36:pi=40;33:so=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:ex=01;32:*.bat=01;32:*.BAT=01;32:*.btm=01;32:*.BTM=01;32:*.cmd=01;32:*.CMD=01;32:*.com=01;32:*.COM=01;32:*.dll=01;32:*.DLL=01;32:*.exe=01;32:*.EXE=01;32:*.arj=01;31:*.bz2=01;31:*.deb=01;31:*.gz=01;31:*.lzh=01;31:*.rpm=01;31:*.tar=01;31:*.taz=01;31:*.tb2=01;31:*.tbz2=01;31:*.tbz=01;31:*.tgz=01;31:*.tz2=01;31:*.z=01;31:*.Z=01;31:*.zip=01;31:*.ZIP=01;31:*.zoo=01;31:*.asf=01;35:*.ASF=01;35:*.avi=01;35:*.AVI=01;35:*.bmp=01;35:*.BMP=01;35:*.flac=01;35:*.FLAC=01;35:*.gif=01;35:*.GIF=01;35:*.jpg=01;35:*.JPG=01;35:*.jpeg=01;35:*.JPEG=01;35:*.m2a=01;35:*.M2a=01;35:*.m2v=01;35:*.M2V=01;35:*.mov=01;35:*.MOV=01;35:*.mp3=01;35:*.MP3=01;35:*.mpeg=01;35:*.MPEG=01;35:*.mpg=01;35:*.MPG=01;35:*.ogg=01;35:*.OGG=01;35:*.ppm=01;35:*.rm=01;35:*.RM=01;35:*.tga=01;35:*.TGA=01;35:*.tif=01;35:*.TIF=01;35:*.wav=01;35:*.WAV=01;35:*.wmv=01;35:*.WMV=01;35:*.xbm=01;35:*.xpm=01;35:"; if ( s == ( ( void * ) 0 ) || ! force_color && ( nocolor || ! isatty ( 1 ) ) )  colors = strcpy ( ( xmalloc ( strlen ( s ) + 1 ) ) , s ); arg = split ( colors , ":" , & n ); char **split(char *str,char *delim,int *nwrds) int n = 128 ; char * * w = ( xmalloc ( sizeof ( char * ) * n ) ) ; w [ * nwrds = 0 ] = strtok ( str , delim ); while ( w [ * nwrds ] )  if ( * nwrds == n - 2 )  w = ( xrealloc ( w , sizeof ( char * ) * ( n += 256 ) ) ); w [ ++ * nwrds ] = strtok ( ( ( void * ) 0 ) , delim ); w [ * nwrds ] = ( ( void * ) 0 ); return w ; for (i = 0; arg[i]; i++) c = split ( arg [ i ] , "=" , & n ); char **split(char *str,char *delim,int *nwrds) int n = 128 ; char * * w = ( xmalloc ( sizeof ( char * ) * n ) ) ; w [ * nwrds = 0 ] = strtok ( str , delim ); while ( w [ * nwrds ] )  if ( * nwrds == n - 2 )  w = ( xrealloc ( w , sizeof ( char * ) * ( n += 256 ) ) ); w [ ++ * nwrds ] = strtok ( ( ( void * ) 0 ) , delim ); w [ * nwrds ] = ( ( void * ) 0 ); return w ; switch ( cmd ( c [ 0 ] ) )  int cmd(char *s) static struct { char * cmd ; char cmdnum ; } cmds [ ] = { { ( "no" ) , ( COL_NORMAL ) } , { ( "fi" ) , ( COL_FILE ) } , { ( "di" ) , ( COL_DIR ) } , { ( "ln" ) , ( COL_LINK ) } , { ( "pi" ) , ( COL_FIFO ) } , { ( "do" ) , ( COL_DOOR ) } , { ( "bd" ) , ( COL_BLK ) } , { ( "cd" ) , ( COL_CHR ) } , { ( "or" ) , ( COL_ORPHAN ) } , { ( "so" ) , ( COL_SOCK ) } , { ( "su" ) , ( COL_SETUID ) } , { ( "sg" ) , ( COL_SETGID ) } , { ( "tw" ) , ( COL_STICKY_OTHER_WRITABLE ) } , { ( "ow" ) , ( COL_OTHER_WRITABLE ) } , { ( "st" ) , ( COL_STICKY ) } , { ( "ex" ) , ( COL_EXEC ) } , { ( "mi" ) , ( COL_MISSING ) } , { ( "lc" ) , ( COL_LEFTCODE ) } , { ( "rc" ) , ( COL_RIGHTCODE ) } , { ( "ec" ) , ( COL_ENDCODE ) } , { ( ( ( void * ) 0 ) ) , ( 0 ) } } ; int i ; for (i = 0; cmds[i] . cmdnum; i++) if ( ! strcmp ( cmds [ i ] . cmd , s ) )  return cmds [ i ] . cmdnum ; if ( s [ 0 ] == '*' )  return DOT_EXTENSION ; return ERROR ; if ( c [ 1 ] )  e = ( xmalloc ( sizeof ( struct extensions ) ) ); e -> ext = strcpy ( ( xmalloc ( strlen ( ( c [ 0 ] + 1 ) ) + 1 ) ) , ( c [ 0 ] + 1 ) ); e -> term_flg = strcpy ( ( xmalloc ( strlen ( c [ 1 ] ) + 1 ) ) , c [ 1 ] ); e -> nxt = ext; ext = e; 