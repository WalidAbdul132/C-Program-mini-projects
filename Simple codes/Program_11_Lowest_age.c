#include <stdio.h>

main(void)
{
    int Ram, Shyam, Ajay, min;

    printf("\nEnter the ages of the following:");
    printf("\nRam :");
    scanf("%d", &Ram);

    printf("\nShyam:");
    scanf("%d", &Shyam);

    printf("\nAjay :");
    scanf("%d", &Ajay);

    min = Ram;

    if(Shyam >= Ajay){
        if(Ajay <= min){
            min = Ajay;
            printf("\nAjay is the Youngest Among the Three");
         }else{
            printf("\nRam is the Youngest Among the Three");
        }
    }else if(Ajay >= Shyam){
            if(Shyam <= min){
            min = Shyam;
            printf("\nShyam is the Youngest Among the Three");
        } else{
            printf("\nRam is the Youngest Among the Three");
        }
    }

}
