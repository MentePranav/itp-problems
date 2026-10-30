#include<stdio.h>

int main(void)
{
    int max;
    int num;
    int count;
    int n;


    printf("enter n: ");
    scanf("%d", &n);
    printf("enter number: ");
    scanf("%d", &num);
    max = num;
    count = 1;
    while (count<n)
    {
        printf("enter num: ");
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
        count++;
    printf("maximum = %d\n", max);


    }

}
