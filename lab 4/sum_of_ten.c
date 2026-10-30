#include<stdio.h>

int main(void)
{
	int a,sum;
	int count=1;
	int n;
	printf("enter n: ");
	scanf("%d", &n);


	sum=0;
	count=1;
	while (count<=n)
	{
		printf("\n Enter number: ");
		scanf("%d",&a);
		sum=sum+a;
		count++;
	}

	printf("\n The sum of the %d numbers is %d",n, sum);

	return 0;
}\

/* Trace of variables: sum
What is the value of the variable sum after count=5?
The sum of the first 5 numbers which the user enters.
What is the value of the variable sum in terms of count and the inputs?
*/
