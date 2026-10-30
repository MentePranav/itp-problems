#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double a[n],b[n];
    double dot=0.0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        dot+=a[i]*b[i];
    }
    printf("Dot product: %.2f\n",dot);
    return 0;
}
