#include <stdio.h>

int main(int argc, char *argv[])
{
    int nb1, nb2;

    printf("Entrez un nombre : \n");
    scanf(" %d", &nb1);

    printf("Choisir la disposition (1,2,3,4,5) : \n");
    scanf(" %d", &nb2);
    char repet = "*";
    char white=" ";

    switch (nb2)
    {
    case 1:
        display1(nb1);
        break;
    case 2:
        display1(nb1);
        break;
    case 3:
        display1(nb1);
        break;
    case 4:
        display1(nb1);
        break;
    case 5:
        display1(nb1);
        break;
    default:
        break;
    }

}

void display1(int number){
    for (int i = 0; i < number; i++)
    {
        
    }
    

}

void display2(int number){

}

void display3(int number){

}

void display4(int number){

}

void display5(int number){

}