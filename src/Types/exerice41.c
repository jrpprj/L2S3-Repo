#include <stdio.h>

int main(int argc, char *argv[])
{
//    int x[3];
//    *(&x[0] + 1) = 2;
//    *(&x[0] + 2) = 4;
//    printf("%p\n", &x);
//    printf("%ld\n%ld\n", sizeof(x), sizeof(&x));
    int x[3];
    x[1] = 2;
    x[2] = 4;
    printf("%p\n", &x);
    printf("%ld\n%ld\n", sizeof(x), sizeof(&x));
    return 0;
}