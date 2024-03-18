#include <stdio.h>
#include "../src/degre.h"

int menu() {
    int choix;
    printf("Menu de conversion:\n");
    printf("1. Celsius vers Kelvin\n");
    printf("2. Celsius vers Fahrenheit\n");
    printf("3. Kelvin vers Celsius");
    printf("4. Kelvin vers Fahrenheit");
    printf("5. Fahrenheit vers Celsius");
    printf("6. Fahrenheit vers Kelvin");
    printf("0. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    return choix;
}

void conversion(int choix) {
    double celsius, resultat;
    switch (choix) {
        case 1:
            printf("Entrez la température en Celsius : ");
            scanf("%lf", &celsius);
            resultat = CelsiusAKelvin(celsius);
            printf("%.2f Celsius = %.2f Kelvin\n", celsius, resultat);
            break;
        case 2:
            printf("Entrez la température en Celsius : ");
            scanf("%lf", &celsius);
            resultat = CelsiusAFahrenheit(celsius);
            printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, resultat);
            break;
        case 3:
            printf("Entrez la température en Kelvin : ");
            scanf("%lf", &celsius);
            resultat = KelvinACelsius(celsius);
            printf("%.2f Kelvin = %.2f Celsius\n", celsius, resultat);
            break;
        case 4:
            printf("Entrez la température en Kelvin : ");
            scanf("%lf", &celsius);
            resultat = KelvinAFahrenheit(celsius);
            printf("%.2f Kelvin = %.2f Celsius\n", celsius, resultat);
            break;
        case 5:
            printf("Entrez la température en Fahrenheit : ");
            scanf("%lf", &celsius);
            resultat = FahrenheitACelsius(celsius);
            printf("%.2f Fahrenheit = %.2f Celsius\n", celsius, resultat);
            break;
        case 6:
            printf("Entrez la température en Fahrenheit : ");
            scanf("%lf", &celsius);
            resultat = FahrenheitAKelvin(celsius);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", celsius, resultat);
            break;
        case 0:
            printf("Fin du programme.\n");
            break;
        default:
            printf("Choix invalide.\n");
    }
}

int main() {
    int choix;
    do {
        choix = menu();
        conversion(choix);
    } 
    while (choix != 0);

    return 0;
}
