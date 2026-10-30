#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
int a[n];
printf("Enter the values: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int found=0;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
printf("Repeated value: %d, Positions: %d, %d\n",a[i],i,j);
found=1;
break;
}
}
if(found)
{
break;
}
}
if(!found)
{
printf("There are no repeated values.\n");
}
return 0;
}
