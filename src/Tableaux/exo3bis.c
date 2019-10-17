#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 10

int grid(int * g, int n)
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        g[i] = rand()%n;
    }
    return 0;
}

void search(int * g, int * leader) // trouve_candidat
{
    int s = 0, i ;
    leader = &g[0];
    for (i = 0; i <= 9; i++)
    {
        if (s == 0)
        {
            leader = &g[i];
            s = 1;
            continue;
        }
        if ((&g[i] == leader) && (s > 0)) // pb aled
        {
            ++s;
        }
        if ((&g[i] != leader) && (s > 0))
        {
            --s;
        }
    }
}

int check(int * g, int leader) // verifie_candidat
{
    int s = 0, i;
    for (i = 0; i <= 9; i++)
    {
        if (&g[i] == leader)
        {
            s++;
        }
    }
    if (s > TAILLE / 2)
    {
        printf("Element majoritaire: '%p'\n", leader);
        return 0;
    }
    printf("Aucune valeur n'est majoritaire\n");
    return 0;
}

int main()
{
    srand(time(NULL));
    int t[TAILLE], n;
    int * leader;
    scanf("%d", &n);
    grid(t, n);
    for (int i = 0; i <= 9; i++)
    {
        printf("%d, ", t[i]);
    }
    search(t, &leader);
    printf("Candidat = %p\n", leader);
    check(t, &leader);
}