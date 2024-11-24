#include <stdio.h>

int main() {
    // To convert fahrenheit into celcius
    float fahrenheit = 98.3; // Given value of Fahrenheit
    float celcius; // Initialisation of Celcius
    celcius = 5*(fahrenheit - 32) / 9; // Formula to convert fahrenheit into celcius
    printf("Temperature in celcius will be: %f",celcius);
    
    return 0;
}