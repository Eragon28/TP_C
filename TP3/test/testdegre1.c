#include <stdio.h>
#include "../src/degre.h"

int main() {
    double celsius = 25.0;
    double kelvin = CelsiusAKelvin(celsius);
    double fahrenheit = CelsiusAFahrenheit(celsius);

    printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
