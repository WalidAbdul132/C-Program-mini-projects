#include <stdio.h>

int main(void)
{
    float fahrenheit, Celsius;
    printf("\n\t\tFahrenheit to Celsius Converter:\n");
    printf("\nPlease Enter the temperature(F):");
    scanf("%f", &fahrenheit);

    Celsius = (fahrenheit - 32) * 5/9;


    printf("\n %.2f Fahrenheit converted to Celsius is %.2f", fahrenheit, Celsius);

return 0;

}
