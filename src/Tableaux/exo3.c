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

int search(int * g) // trouve_candidat
{
    int s = 0, i ;
    int leader = g[0];
    for (i = 0; i <= 9; i++)
    {
        if (s == 0)
        {
            leader = g[i];
            s = 1;
            continue;
        }
        if ((g[i] == leader) && (s > 0))
        {
            ++s;
        }
        if ((g[i] != leader) && (s > 0))
        {
            --s;
        }
    }
    return leader;
}

int check(int * g, int leader) // verifie_candidat
{
    int s = 0, i;
    for (i = 0; i <= 9; i++)
    {
        if (g[i] == leader)
        {
            s++;
        }
    }
    return s;
}

int main()
{
    srand(time(NULL));
    int t[TAILLE], n;
    scanf("%d", &n);
    grid(t, n);
    for (int i = 0; i <= 9; i++)
    {
        printf("%d, ", t[i]);
    }
    int maj = search(t);
    printf("Candidat = %d\n", maj);
    int nombre = check(t, maj);
    if (nombre > TAILLE / 2)
    {
        printf("Element majoritaire: '%d'\n", maj);
        return 0;
    }
    printf("Aucune valeur n'est majoritaire\n");
}