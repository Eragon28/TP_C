#include <stdio.h>

#define PI 3.14159

int main() {
    float rayon, perimetre, surface;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);

    perimetre = 2 * PI * rayon;
    surface = PI * rayon * rayon;

    printf("Le perimetre du cercle est : %.2f\n", perimetre);
    printf("La surface est : %.2f\n", surface);

    return 0;
}
