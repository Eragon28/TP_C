#include <stdio.h>

int main(int argc, char *argv[])
{
    int nb1, nb2;

    printf("Entrez un nombre : \n");
    scanf(" %d", &nb1);

    printf("Entrez un second nombre : \n");
    scanf(" %d", &nb2);

    while (nb1*nb2 != 0 && nb1!=nb2)
    {
        if(nb1 > nb2){
            nb1 = nb1-nb2;
        }else{
            nb2 = nb2-nb1;
        }
    }
    
    if(nb1 == 0){
        printf("PGCD = %d \n", nb2);
    }else{
        printf("PGCD = %d \n", nb1);
    }
}