static cgiParseResultType cgiParsePostMultipartInput() cgiParseResultType result ; int got ; char tfileName [ 1024 ] ; mpStreamPtr mpp = & mp ; if ( ! cgiContentLength )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 1 ); if ( result == cgiParseIO )  if ( result != cgiParseSuccess )  while ( 1 )  char d [ 1024 ] ; char fvalue [ 1024 ] ; char fname [ 1024 ] ; int bodyLength = 0 ; char ffileName [ 1024 ] ; char fcontentType [ 1024 ] ; fvalue [ 0 ] = 0; fname [ 0 ] = 0; ffileName [ 0 ] = 0; fcontentType [ 0 ] = 0; out = 0; outf = 0; got = mpRead ( mpp , d , 2 ); if ( got < 2 )  if ( ( d [ 0 ] == '-' ) && ( d [ 1 ] == '-' ) )  if ( ! cgiStrEqNc ( fvalue , "form-data" ) )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 0 ); if ( result != cgiParseSuccess )  if ( strlen ( ffileName ) )  if ( getTempFileName ( tfileName ) != cgiParseSuccess )  outf = fopen ( tfileName , "w+b" ); outf = 0; result = afterNextBoundary ( mpp , outf , & out , & bodyLength , 0 ); if ( result != cgiParseSuccess )  n = ( cgiFormEntry * ) malloc ( sizeof ( cgiFormEntry ) ); if ( ! n )  memset ( n , 0 , sizeof ( cgiFormEntry ) ); n -> attr = ( char * ) malloc ( strlen ( fname ) + 1 ); if ( ! n -> attr )  if ( out )  if ( outf )  n -> value = ( char * ) malloc ( 1 ); if ( ! n -> value )  n -> value [ 0 ] = '\0'; n -> valueLength = bodyLength; n -> next = 0; n -> fileName = ( char * ) malloc ( strlen ( ffileName ) + 1 ); if ( ! n -> fileName )  strcpy ( n -> fileName , ffileName ); n -> contentType = ( char * ) malloc ( strlen ( fcontentType ) + 1 ); if ( ! n -> contentType )  strcpy ( n -> contentType , fcontentType ); n -> tfileName = ( char * ) malloc ( strlen ( tfileName ) + 1 ); if ( ! n -> tfileName )  cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; int boffset ; int got ; char d [ 2 ] ; char workingBoundaryData [ 1024 ] ; char * workingBoundary = workingBoundaryData ; int workingBoundaryLength ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  boffset = 0; sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); if ( first )  workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); while ( 1 )  got = mpRead ( mpp , d , 1 ); if ( got != 1 )  if ( d [ 0 ] == workingBoundary [ boffset ] )  boffset ++; if ( boffset == workingBoundaryLength )  if ( boffset > 0 )  boffset = 0; int mpRead(mpStreamPtr mpp, char *buffer, int len) if ( len > ( cgiContentLength - mpp -> offset ) )  len = cgiContentLength - mpp -> offset; while ( len )  if ( mpp -> readPos != mpp -> writePos )  * buffer ++ = mpp -> putback [ mpp -> readPos ++ ]; mpp -> readPos %= sizeof ( mpp -> putback ); len --; if ( len )  int fgot = fread ( buffer , 1 , len , cgiIn ) ; if ( fgot >= 0 )  mpp -> offset += ( got + fgot ); return got + fgot ; return fgot ; 