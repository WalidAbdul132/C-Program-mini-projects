#include <stdio.h>

int main(void)
{
    float Cost_Price, Selling_Price, Price;

    printf("\n\t\tCalculate loss or profit:\n");
    printf("\nPlease Enter the Cost Price of the Product:");
    scanf("%f", &Cost_Price);

    printf("\nPlease Enter the Selling Price of the Product:");
    scanf("%f", &Selling_Price);

    Price = Selling_Price - Cost_Price;
    if(Selling_Price > Cost_Price){
        printf("this is a profit of %.2f", Price);
    } else if(Selling_Price < Cost_Price){
        printf("there was a loss of %.2f", Price);
    } else if(Selling_Price == Cost_Price){
        printf("There is no profit or loss");
    }


return 0;

}
