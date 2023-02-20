#include <stdio.h>

int main()
{
    int num, fact=1, n;
    printf("\n\t\t Calculating Factorial \n");

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;

    while (num>0)
    {
        fact = fact * num;
        num--;
    }

    printf("The Factorial for %d is %d", n, fact);
}
