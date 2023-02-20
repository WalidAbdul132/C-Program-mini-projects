#include <stdio.h>

int main()
{

    int Num, Reverse = 0, Remainder, Base;

    printf("Enter an integer: ");
    scanf("%d", &Num);

    Base = Num;

    while (Num != 0){
        Remainder = Num % 10;
        Reverse = Reverse * 10 + Remainder;
        Num /= 10;
    }

    printf("\n%d when Reversed is %d", Base, Reverse);


    if(Reverse == Base){
        printf("\nThey are Equal");
    } else {
        printf("\nThey are Not Equal");
    }
    return 0;
}
