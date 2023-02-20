#include <stdio.h>

int main(void)
{
    float kilometer, feet, inches;
    int meter, centimeter;

    printf("Please input the distance(km) between city A and city B:\n");
    scanf("%f", &kilometer);

    meter = kilometer * 100;
    feet = kilometer * 3280.84;
    inches = kilometer * 39370.1;
    centimeter = kilometer * 100000;

    printf("\nThe distance between city A and City B is %d meters", meter);
    printf("\nThe distance between city A and City B is %.2f feet", feet);
    printf("\nThe distance between city A and City B is %.2f inches", inches);
    printf("\nThe distance between city A and City B is %d centimeters", centimeter);

}
