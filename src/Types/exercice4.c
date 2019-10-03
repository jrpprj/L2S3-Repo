#include <stdio.h>

int main(int argc, char *argv[])
{
    int x[3];
    *(&x[0] + 1) = 2;
    *(&x[0] + 2) = 4;
    printf("%d\n%d\n", x[1], x[2]);
    return 0;
}