#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
double a[n];
double sum=0;
double average;
int count=0;
printf("Enter the values: ");
for(int i=0;i<n;i++)
{
scanf("%lf",&a[i]);
sum+=a[i];
}
average=sum/n;
for(int i=0;i<n;i++)
{
if(a[i]>average)
{
count++;
}
}
printf("Average: %.1f\n",average);
printf("Number of values above the average: %d\n",count);
return 0;
}
