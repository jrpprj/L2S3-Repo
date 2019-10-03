#include <stdio.h>
#define TAILLE 100000

int crible(int * f)
{
    f[0] = 0;
    f[1] = 0;
    for (int i = 2; i < TAILLE; i++)
    {
        f[i] = 1;
    }
    return 0;
}

int cribleEr(int * f)
{
    int j;
    for (int i = 0; (i*i) < TAILLE; i++)
    {
        if (f[i] == 0)
        {
            continue;
        }
        for (j = 2; i*j < TAILLE; j++)
        {
            f[i*j] = 0;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int t[TAILLE];
    crible(t);
    cribleEr(t);
    int i = 0;
    int n;
    while (i == 0)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        if (n >= TAILLE)
        {
            continue;
        }
        else
        {
            if (t[n] == 1)
            {
                printf("%d est un nombre premier", n);
            }
            else
            {
                printf("%d n'est pas un nombre premier", n);
            }
        }
    }
}