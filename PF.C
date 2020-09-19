#include<stdio.h>
void main()
{
	int i,n,sum;
	printf("enter value of n");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("given no %d is perfect no",n);
	}
	else
	{
		printf("given no %d is not perfect no",n);
	}
}