#include<stdio.h >
#include<math.h>

int main()
{
    float sum = 0, fact = 1;
    int i;

        for(i = 1; i <= 7;  i++)
        {
           fact = fact * i;
           sum = sum + i / fact;
        }

        printf("%0.2f", sum);

    return 0;
}
