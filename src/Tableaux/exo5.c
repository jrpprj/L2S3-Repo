#include <stdio.h>
#define TAILLE 10

int print_tab(int * t, int nslots)
{
    int i;
    for (i = 0; i < nslots; i++)
    {
        printf("%d,", t[i]);
    }
    printf("\n");
}

void echange(int * t, int i1, int i2)
{
    int a = t[i1];
    int b = t[i2];
    t[i1] = b;
    t[i2] = a;
}

void element_max(int * t, int nslots, int * imax)
{
    int i, max = t[0];
    *imax = 0;
    for (i = 1; i < nslots; i++)
    {
        if (t[i] > max)
        {
            *imax = i;
            max = t[i];
        }
    }
}

int tri(int * t, int nslots)
{
    int imax, i;
    for (i = 0; i < nslots-1; i++)
    {
        element_max(t, nslots - i, &imax);
        echange(t, imax, nslots - i - 1);
    }
}

int main(int argc, char *argv[])
{
    int t[TAILLE] = {5,4,6,1,2,4,5,4,8, 7};
    print_tab(t, TAILLE);
    tri(t, TAILLE);
    print_tab(t, TAILLE);
}