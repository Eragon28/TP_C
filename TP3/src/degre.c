#include "degre.h"

double CelsiusAKelvin(double celsius) {
    return celsius + 273.15;
}

double CelsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double KelvinACelsius(double kelvin) {
    return kelvin - 273.15;
}

double KelvinAFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}

double FahrenheitACelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double FahrenheitAKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}
