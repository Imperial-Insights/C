#include<stdio.h>
void main()
{
	int i,sum,n;
	clrscr();
	printf("enter value of n");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	printf("sum of factors of %d is %d",n,sum);
}