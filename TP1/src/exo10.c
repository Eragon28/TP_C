#include <stdio.h>

#define VOYELLES "aeiouy"

int main(int argc, char *argv[])
{
    char str[20];
    int count = 0;
    printf("Entrez une chaine de caractères se terminant par #: ");
    gets(str);

    char lastChar = str[strlen(str)-1];

    if (lastChar != '#')
    {
        printf("Erreur : la chaine doit se terminer par un #\n");
        return 1;
    }

    for (int i = 0; str[i] != '#'; i++)
    {
        for (int j = 0; VOYELLES[j] != '\0'; j++)
        {
            if (str[i] == VOYELLES[j])
            {
                count += 1;
                break;
            }
        }
    }

    printf("Il y a %d voyelles dans la chaine\n", count);
    return 0;
}
