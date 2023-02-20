#include<stdio.h>
int main()
{
    int n, first, last, sum, num, d=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    while(num!=0)
    {
        num = num/10;
        d = d*10;
    }
    d = d/10;
    first = n/d;
    last = n%10;
    sum = first+last;

    printf("Sum of first and last digit of %d is: %d",n,sum);
}
