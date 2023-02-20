#include <stdio.h>
void main()
{
   int i,j,spc,rows = 4,k,t=1;

   spc = rows+4-1;

   for(i=1;i<=rows;i++)
   {
        for(k = spc ; k >= 1 ; k--)
        {
              printf(" ");
        }

        for(j = 1 ; j <= i ; j++)
        {
            printf("%d ", t++);
        }

	printf("\n");
    spc--;
   }
}
