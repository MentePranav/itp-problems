#include<stdio.h>

int main(void)
{
    double a,b,c;
    printf("enter 3 numbers\n");
    scanf("%lf %lf %lf", &a,&b,&c);
    if ((a<=b) && (a<=c))
    {
        printf("smallest is %lf", a);
    }
    else if ((b<=a) && (b<=c))
    {
        printf("smallest is %lf", b);
    }
    else
    {
        printf("smallest is %lf", c);
    }
    return 0;
}
