#include<stdio.h>
void main()
{
	int i,n,sum;
	clrscr();
	printf("enter value of n to calculate sum of squares of natural nos\n");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("sum of squares of %d natural nos is %d",n,sum);
}