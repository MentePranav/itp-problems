#include<stdio.h>


int main()
{
    int a, b, count = 0;
    printf("enter:");
    scanf("%d",&a);

    for(int b=1; b <= a; b++)
    {
        if(a%b == 0)
        {
            count++;

        }
    }
    if (count == 2)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d is not prime", a);
    }
    return 0;
}

