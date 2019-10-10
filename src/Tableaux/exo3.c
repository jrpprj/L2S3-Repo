#include <stdio.h>
#include <time.h>
#define TAILLE 10

int grid(int * g, int n)
{
    int i;
    scrand(time(NULL));
    for (i = 0; i <= 9; i++)
    {
        g[i] = rand()%n;
    }
    return 0;
}

int check(int * g)
{
    int s = 0, i ;
    int leader = g[0];
    for (i = 0; i <= 9; i++)
    {
        if (g[i] = leader)
        {
            s++;
            if (s == 1)
            {
                leader = g[i];
            }
        }
        if (g[i] != leader)
        {
            s--;
        }
    }
    return leader;
}

int search(int * g, int leader)
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
    int t[TAILLE], n;
    scanf("%d", &n);
    grid(t, n);
    int maj = check(t);
    int nombre = search(t, maj);
    if (10 - nombre >= 5)
    {
        printf("Element majoritaire %d\n", maj);
        return 0;
    }
    printf("Toutes valeurs non majoritaire");
}