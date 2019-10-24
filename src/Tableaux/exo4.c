#include <stdio.h>
#define TAILLE 10

int print_tab(unsigned char * t, int nslots)
{
    int i;
    for (i = 0; i < nslots; i++)
    {
        printf("%d,", t[i]);
    }
    printf("\n");
}

void additionneur(unsigned char t1, unsigned char t2, unsigned char * resultat, unsigned char * retenue)
{
    int res = t1 + t2 + *retenue;
    *resultat = res % 256;
    *retenue = res / 256 ;
}

int addition_tableau(unsigned char * t1, unsigned char * t2, unsigned char * t3, int n)
{
    int i;
    unsigned char resultat;
    unsigned char retenue;
    retenue = 0;
    for (i = 0; i < TAILLE; i++)
    {
        additionneur(t1[i], t2[i], &resultat, &retenue);
        t3[i] = resultat;
    }
    if (retenue == 1)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    unsigned char t1[TAILLE] = {56, 56, 56, 56, 56, 0};
    unsigned char t2[TAILLE] = {56, 125, 234, 12, 144, 0};
    unsigned char t3[TAILLE] = {0};
    print_tab(t1, TAILLE);
    print_tab(t2, TAILLE);
    print_tab(t3, TAILLE);
    printf("%d\n", addition_tableau(t1,t2,t3, TAILLE));
    print_tab(t3, TAILLE);
    return 0;
}