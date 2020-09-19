#include<stdio.h>
void main()
{
	int i,n,sum,r,n1;
	clrscr();
	printf("enter any interger");
	scanf("%d",&n);
	n1=n;
	sum=0;
	while(n1>0)
	{
		r=n1%10;
		sum=sum+(r*r*r);
		n1=n1/10;
	}
	if(sum==n)
	{
		printf("given no is armstrong no");
	}
	else
	{
		printf("given no is not armstrong");
	}
}
