#include <stdio.h>

int main(int argc, char *argv[])
{
    float x;
    x = 10/3;
    printf("X = %f\n", x);
    printf("X = %d\n", (int)x);
    x = 10.0/3;
    printf("X = %f\n", x);
    x = 10.0/3.0;
    printf("X = %f\n", x);
    x = (float)10/3;
    printf("X = %f\n", x);
    x = ((float)10)/3;
    printf("X = %f\n", x);
    printf("X = %.1f\n", x);
    printf("X = %.5f\n", x);
    
}