#include <stdio.h>
#include <stdlib.h>   // for abs()

int main()
{
    int a, b;
    int maximum, minimum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    maximum = (a + b + abs(a - b)) / 2;
    minimum = (a + b - abs(a - b)) / 2;

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}
