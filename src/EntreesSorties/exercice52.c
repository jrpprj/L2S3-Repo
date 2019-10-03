#include <stdio.h>

int main(int argc, char *argv[])
{
    char c, sentence[20];
    char yourname[10];
    int i = 0;
    printf("Ecrivez: Bonjour, je suis XXX\n");
    scanf("Bonjour, je suis %s", yourname);
    while ((c = getchar()) != EOF && c != '\n')
    {
        sentence[i++] = c;
        printf("%c", c);
    }
    printf("\n");
    sentence[i] = '\0';
    if (i == 0)
    {
        printf("Bonjour, %s\n", yourname);
        return 0;
    }
    printf("Qui êtes-vous?\n");
    return 0;
}