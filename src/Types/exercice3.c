#include <stdio.h>

int main(int argc, char *argv[])
{
    int x0;
    int x1;
    int x2;
    *(&x0 + 1) = 2;
    *(&x0 + 2) = 4;
    printf("%d\n%d\n", x1, x2);
    return 0;
}