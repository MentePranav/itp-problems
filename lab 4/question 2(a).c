#include<stdio.h>

int main(void)
{
    int n;
    int count = 1;
    printf("enter n: \n");
    scanf("%d", &n);
    while (count<=n)
    {
        printf("*");
        count++;
    }
    printf("\n");
    return 0;
}
