#include <stdio.h>

int main(int argc, char *argv[])
{
    for (char c = '0'; c <= '9'; c++)
    {
        printf("'%c' = %d\n", c, c);
    }
    char a = 'a';
    char z = 'z';
    printf("'%c' = %d\n'%c' = %d\n'z - a' = %d\n", a, a, z, z, z - a);
    char A = 'A';
    char Z = 'Z';
    printf("'%c' = %d\n'%c' = %d\n'Z - A' = %d\n", A, A, Z, Z, Z - A);
    return 0;
}