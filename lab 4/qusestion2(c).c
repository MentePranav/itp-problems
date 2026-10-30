#include<stdio.h>

int main(void)
{
    float x;
    float power;
    power = 1;
    int n;
    int count;
    count = 1;

    printf("enter floating point number x: ");
    scanf("%f", &x);
    printf("\nenter n'th power: ");
    scanf("%d", &n);

    while(count<=n)
    {
        power = power * x;

        printf("%.3f, ", power);
        count++;

    }

}
