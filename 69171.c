 main(int argc, char **argv) char * userstr ; if ( argc > 1 )  userstr = argv [ 1 ]; test ( userstr );  test(char *str) char buf1 [ MAXSIZE ] ; strncpy ( buf1 , str , sizeof buf1 ); strcpy ( buf3 , buf1 ); printf ( "result: %s\n" , buf3 ); 