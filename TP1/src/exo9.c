#include <stdio.h>

int main(int argc, char *argv[])
{
    int X, N;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &X, &N);

    if (X <= 0)
    {
        printf("Erreur : X doit être positif\n");
        return 1;
    }
    else if (N < 0)
    {
        printf("Erreur : N doit être strictement positif\n");
        return 1;
    }
    else {
        int result = 1;
        for (int i = 0; i < N; i++)
        {
            result *= X;
        }
        printf("%d^%d = %d\n", X, N, result);
    }
}

    