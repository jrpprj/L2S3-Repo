#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    char * ligne;
    char c;
    scanf("%m[^\n]%c", &ligne, &c);
    int x = sizeof(ligne);
    printf("%d\n", x);
    while (i != x)
    {
        if (ligne[i] == ' ')
        {
            i++;
        }
        else
        {
            ligne[i] = ligne[i] + 13;
            i++;
        }
    }
    printf("%s\n", ligne);
    return 0;
}