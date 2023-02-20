#include <stdio.h>

int main(void)
{
    float Breadth, Length, Radius, Area_R, Area_C, Perimeter, Circumference, Pi;
    Pi = 3.14;

    printf("\n\t\tFahrenheit to Celsius Converter:\n");
    printf("\nPlease Enter the Breadth of the rectangle:");
    scanf("%f", &Breadth);

    printf("\nPlease Enter the Length of the rectangle:");
    scanf("%f", &Length);

    printf("\nPlease Enter the Radius of the circle:");
    scanf("%f", &Radius);

    Area_R = Length * Breadth;
    Perimeter = 2 * (Length * Breadth);
    Area_C = Pi * (Radius * Radius);
    Circumference = 2 * (Pi * Radius);


    printf("\nThe Area of the Rectangle is %.2f", Area_R);
    printf("\nThe Perimeter of the Rectangle is %.2f", Perimeter);
    printf("\nThe Area of the Circle is %.2f", Area_C);
    printf("\nThe Circumference of the Circle is %.2f", Circumference);

return 0;

}
