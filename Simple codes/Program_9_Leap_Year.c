#include <stdio.h>

int main(void)
{
    int Year, Mod;

    printf("\n\t\t Check if Year is a Leap year or Not:\n");
    printf("\nPlease Enter the Year :");
    scanf("%d", &Year);

    Mod = Year % 4;
    if(Mod > 0){
        printf("%d is Not a Leap Year", Year);
    } else{
        printf("%d is a Leap year", Year);
    }

return 0;

}
