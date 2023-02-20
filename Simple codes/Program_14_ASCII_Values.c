#include<stdio.h>

int main()
{
    int c = -128;

    while(c < 128){
        printf("%d = %c\n", c, c);
        c++;
    }
}
