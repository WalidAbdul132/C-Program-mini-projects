#include <stdio.h>
#include <math.h>

int main()
{
    float Salary, Allowance, Rent, Gross;

    printf("\n\t\tCalculating Gross Salary");
    printf("\n\nEnter Basic Salary: ");
    scanf("%f",&Salary);

    Allowance = 0.4 * Salary;
    Rent = 0.2 * Salary;

    Gross = Salary + Allowance + Rent;

    printf("\n Basic Salary: %.2f",  Salary);
    printf("\n Dearness Allowance: %.2f", Allowance);
    printf("\n House Rent: %.2f", Rent);
    printf("\n\n Gross Salary: %.2f", Gross);

    return (0);
}
