#include <stdio.h>

int main(int argc, char *argv[])
{
    char x0;
    char x1;
    char x2;
    x1 = 4 ;
    *(&x0 + 1) = 2;
    printf ( "%p\n%p\n%p\n" , &x0 , &x1 , &x2 ) ;
    printf ( "x1 = %d\n" , x1 ) ;
    printf ( "& x0 = %p, & argc = %p\n" , & x0 , & argc ) ;
    *(&x0 - 9 ) = 4;
    printf("%d\n", argc);
    return 0;
}