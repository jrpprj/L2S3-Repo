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

int decomposition(int * f, int e)
{
    if (f[e] == e)
    {
        printf("%d\n", e);
        return 0;
    }
    else
    {
        printf("%d * ", e / f[e]);
        return decomposition(f, f[e]);
    }
}

int main(int argc, char *argv[])
{
    int t[TAILLE];
    crible(t);
    cribleEr(t);
    int n;
    scanf("%d", &n);
    decomposition(t, n);
    return 0;
}