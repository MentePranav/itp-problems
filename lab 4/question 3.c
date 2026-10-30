#include<stdio.h>

int main(void)
{
    float r;
    float amount;
    float prin;

    int years;
    printf("enter principle amount: ");
    scanf("%f", &prin);
    amount = prin;
    years = 0;

    printf("enter rate of interst: ");
    scanf("%f", &r);

    while (amount < 2 * prin)
    {
        amount = amount*(1 + r/100);
        years++;
    }
    printf("Year = %d", years);
    return 0;
}
