#include<stdio.h >
#include<math.h>

int main()
{
    int num, count, i, prime;

    printf("Prime Numbers from 1 To 300 are\n");

    num=3;
    while(num <= 300){
        count = sqrt(num);
        prime = 3;
        for(i = 2; i <= count; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
        {
            printf("%d\t", num);
        }
        num++;
    }

    return 0;
}
