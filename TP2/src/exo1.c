#include <stdio.h>



int main(int argc, char *argv[])
{
    int nb1, nb2;

    printf("Entrez un nombre : \n");
    scanf("%d", &nb1);

    printf("Choisir la disposition (1,2,3,4,5) : \n");
    scanf("%d", &nb2);

    switch (nb2)
    {
    case 1:
        display1(nb1);
        break;
    case 2:
        display2(nb1);
        break;
    case 3:
        display3(nb1);
        break;
    case 4:
        display4(nb1);
        break;
    case 5:
        display5(nb1);
        break;
    default:
        printf("Error");
        break;
    } 

}

void display1(int number){
    for (int i = 0; i < number; i++)
    {
        int index = 0;
        
        while (index < number)
        {
           printf("*");
           index = index + 1;
        }
        
        printf("\n");
        
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