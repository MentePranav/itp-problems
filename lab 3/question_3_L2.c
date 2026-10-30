#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c;
    float d;
    float root1, root2;

    printf("enter the 3 coefficents a,b,c of (ax^2 + bx + c):");
    scanf("%f %f %f", &a,&b,&c);
    d = (b*b - 4*a*c);
    if (d>0)
    {
        printf("\nthere are two real roots");
    }
    else if (d==0)
    {
        printf("\nonly one root exist");
    }
    else
    {
        printf("\n no real roots exist");
    }

}
