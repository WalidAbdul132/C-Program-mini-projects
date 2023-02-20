#include <stdio.h>
#include <math.h>

int main()
{

    int x1, x2, x3, y1, y2, y3, ab, ac, bc, w;

    printf("Enter first Coordinate: \n ");
    scanf("%d%d", &x1, &y1);

    printf("Enter first Coordinate: \n");
    scanf("%d%d", &x2, &y2);

    printf("Enter first Coordinate: \n");
    scanf("%d%d", &x3, &y3);

    ab = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    ac = sqrt(pow(x3-x1,2)+ pow(y3-y1,2));
    bc = sqrt(pow(x3-x2,2)+ pow(y3-y2,2));

    w = ab + ac;

    if(w == bc){
        printf("\nIts a Co-linear Line");
    } else {
        printf("\nIts not a Co-linear Line");
    }
    return 0;
}
