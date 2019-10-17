#include <stdio.h>
#define TAILLE 10

int print_tab(unsigned char * t, int nslots)
{
    int i;
    for (i = 0; i < nslots; i++)
    {
        printf("%d\n", t[i]);
    }
}

int main(int argc, char *argv[])
{
    unsigned char t1[TAILLE] = {56, 56, 56, 56, 56, 0};
    unsigned char t2[TAILLE] = {56, 125, 234, 12, 144, 0};
    unsigned char t3[TAILLE];
    print_tab(t1, TAILLE);
}