#include <stdio.h>


int main(int argc, char *argv[])
{
    int forIncr, forDecr;

    int inp;

    printf("Entrez un nombre : \n");
    scanf(" %d", &inp);
    forIncr= sommeForIncr(inp);
    forDecr = sommeForDecr(inp);

    printf("X = %d\n", forIncr);
    printf("X = %d\n", forDecr);

    int whileIncr, whileDecr;
    whileIncr = sommeWhileIncr(inp);
    whileDecr = sommeWhileDecr(inp);

    printf("X = %d\n", whileIncr);
    printf("X = %d\n", whileDecr);
}

int sommeForIncr(int n){
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total = total + i;
    }
    return total;
}

int sommeForDecr(int n){
    int total = 0;
    for (int i = n; i > 0; i--)
    {
        total = total + i;
    }
    return total;
}

int sommeWhileIncr(int n){
    int i = 0 ;
    int total = 0;
    while (i <= n)
    {
        total = total + i;
       i = i + 1;
    }
    return total;
}

int sommeWhileDecr(int n){

    int total = 0;
    while (0 < n)
    {
        total = total + n;
       n = n - 1;
    }
    return total;
}

