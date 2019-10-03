#include <stdio.h>

int main(int argc, char *argv[])
{
    char c, sentence[20];
    int i = 0;
    printf("Ecrivez: Bonjour, monde !\n");
    scanf("Bonjour, monde !");
    while ((c = getchar()) != EOF && c != '\n')
    {
        sentence[i++] = c;
        printf("%c", c);
    }
    printf("\n");
    sentence[i] = '\0';
    if (i == 0)
    {
        printf("Je vous ai compris!\n");
        return 0;
    }
    printf("Vous avez fait une mauvaise saisie!\n");
    return 0;
}