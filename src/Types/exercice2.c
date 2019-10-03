#include <stdio.h>

int main(int argc, char *argv[])
{
    int x0;
    int x1;
    int x2;
    printf("%p %p\n", &x0, &x1);
    printf("%ld\n", &x1 - &x0);
    printf("%ld\n%ld\n", &x2 - &x1, &x2 - &x0);
    return 0;
}