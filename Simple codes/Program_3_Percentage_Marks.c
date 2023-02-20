#include <stdio.h>

int main(void)
{
    float Math, Eng, Chem, Comp, Phy, Agg;
    float percentage;

    printf("Please input the marks from each of the following subjects:\n");

    printf("\nMath:");
    scanf("%f", &Math);

    printf("\nEng:");
    scanf("%f", &Eng);

    printf("\nChem:");
    scanf("%f", &Chem);

    printf("\nComp:");
    scanf("%f", &Comp);

    printf("\nPhy:");
    scanf("%f", &Phy);

    Agg = Math + Eng + Chem + Comp + Phy;
    percentage = Agg / 500 * 100;


    printf("\nThe Aggregate of all scores is %.2f", Agg);
    printf("\nThe Total Percentage Score is %.2f", percentage);

return 0;

}
