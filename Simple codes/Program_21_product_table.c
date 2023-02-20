#include<stdio.h>

int main()
{
    int num, i;

    printf("Enter a Number From 1 - 10\n");
    scanf("%d", &num);

    if(num >= 1 && num <= 10){
        printf("product table for %d\n", num);
        for(i = 1; i <= 10; i++)
        {
            switch(i)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                    printf("%d * %d = %d\n", num, i, (num * i));
                    break;

                default:
                    printf("error");
                    break;
             }
        }
    } else {
        printf("Number has to be From 1 - 10");
    }

    return 0;
}
