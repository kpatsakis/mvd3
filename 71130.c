int main(int argc, char *argv[]) int copy_size ; int buf_size ; char src [ 10 ] ; char buf [ 10 ] ; memset ( src , 'A' , 10 ); src [ 10 - 1 ] = '\0'; copy_size = 10; buf_size = sizeof buf; if ( copy_size <= buf_size )  memcpy ( buf , src , copy_size ); 