#include <stdio.h>
#define TAILLE 100000

int crible(int * f)
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < TAILLE; i++)
    {
        f[i] = i;
    }
    return 0;
}

int cribleEr(int * f)
{
    int j;
    for (int i = 2; (i*i) < TAILLE; i++)
    {
        if (f[i] == i)
        {
            for (j = 2 ; i*j < TAILLE; j++)
            {
                f[i*j] = j;
            }
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int t[TAILLE];
    crible(t);
    cribleEr(t);
    int n;
    while (1)
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
        if (t[n] == n && n != 1)
        {
            printf("%d est un nombre premier", n);
        }
        else
        {
            printf("%d n'est pas un nombre premier", n);
        }
    }
   return 0;
}
//  Probleme avec cribleEr, non considere