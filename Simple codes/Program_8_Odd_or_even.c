#include <stdio.h>

int main(void)
{
    int Num, Mod;

    printf("\n\t\t Check if Number is Odd or Even:\n");
    printf("\nPlease Enter a Number:");
    scanf("%d", &Num);

    Mod = Num % 2;
    if(Mod > 0){
        printf("%d is an Odd Number", Num);
    } else{
        printf("%d is an Even Number", Num);
    }

return 0;

}
