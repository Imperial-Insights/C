#include<stdio.h>
void main()
{
	int n,n1,sum,r;
	printf("enter value of n");
	scanf("%d",&n);
	n1=n;
	sum=0;
	while(n>0)
	{
		r=n1%10;
		sum=sum+r;
		n1=n1/10;
	}
	printf("the sum of individual digits of given no %d is %d",n,sum);
}