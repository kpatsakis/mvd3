int main(int argc, char *argv[]) unsigned i ; if ( fork ( ) )  for (i=0;i<3;++i) pid = fork ( ); if ( pid == 0 )  pid = getpid ( ); handler ( pid ); void handler(int curPid) if ( access ( fName , W_OK ) )  FILE * f = fopen ( fName , "wb" ) ; if ( f != NULL )  fprintf ( stdout , "(%d) Start handler...\n" , curPid ); fprintf ( stdout , "(%d) Stop handler...\n" , curPid ); 