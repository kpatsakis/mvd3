cgiEnvironmentResultType cgiWriteEnvironment(char *filename) FILE * out ; out = fopen ( filename , "wb" ); if ( ! out )  if ( ! cgiWriteString ( out , "CGIC2.0" ) )  if ( ! cgiWriteString ( out , cgiServerSoftware ) )  if ( ! cgiWriteString ( out , cgiServerName ) )  if ( ! cgiWriteString ( out , cgiGatewayInterface ) )  if ( ! cgiWriteString ( out , cgiServerProtocol ) )  if ( ! cgiWriteString ( out , cgiServerPort ) )  if ( ! cgiWriteString ( out , cgiRequestMethod ) )  if ( ! cgiWriteString ( out , cgiPathInfo ) )  if ( ! cgiWriteString ( out , cgiPathTranslated ) )  if ( ! cgiWriteString ( out , cgiScriptName ) )  if ( ! cgiWriteString ( out , cgiQueryString ) )  if ( ! cgiWriteString ( out , cgiRemoteHost ) )  if ( ! cgiWriteString ( out , cgiRemoteAddr ) )  static int cgiWriteString(FILE *out, char *s) int len = ( int ) strlen ( s ) ; cgiWriteInt ( out , len ); static int cgiWriteInt(FILE *out, int i) if ( ! fwrite ( & i , sizeof ( int ) , 1 , out ) )  