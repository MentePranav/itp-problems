#include<stdio.h>

int main(void)
{
    int n;
    int count;
    count=1;
    printf("enter n: ");
    scanf("%d", &n);
    while(count*count<=n)
    {
        int x = count*count;
        if(x<=n)
        {
            printf("%d, ",x);
            count++;
        }
        else
            return 0;
    }
    return 0;
}
