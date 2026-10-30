#include<stdio.h>
int main()
{
int m,n;
printf("Enter the value of m: ");
scanf("%d",&m);
printf("Enter the value of n: ");
scanf("%d",&n);
printf("Perimeter: %d\n",2*(m+n));
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++)
{
if(i==1||i==m||j==1||j==n)
printf("* ");
else
printf("  ");
}
printf("\n");
}
return 0;
}
