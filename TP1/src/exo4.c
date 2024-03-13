#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    bool x;


    x = 5&6;
    printf("X = 5&6 = %d\n", x);
    x = 5&&6;
    printf("X = 5&&6 = %d\n", x);
    x = 5|6;
    printf("X = 5|6 = %d\n", x);
    x = 5||6;
    printf("X = 5||6 = %d\n", x);
    x = 5^6;
    printf("X = 5^6 = %d\n", x);
    x = 5 ^ 6;   
    printf("X = 5 ^^ 6 = %d\n", x);
    x = ~5;   
    printf("X = ~5 = %d\n", x);
    x = !5;   
    printf("X = !5 = %d\n", x);
}