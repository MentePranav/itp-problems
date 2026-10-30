#include<stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int freq[10]={0};
for(int i=0;i<n;i++)
{
freq[a[i]]++;
}
for(int i=0;i<10;i++)
{
printf("%d: %d\n",i,freq[i]);
}
return 0;
}

