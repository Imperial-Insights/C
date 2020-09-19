#include<stdio.h>
void main()
{
	int i,n,count;
	clrscr();
	printf("enter value of n\t");
	scanf("%d",&n);
	count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count++;
		}
	}
	if(count==2)
	{
		printf("given number %d is prime  no",n);
	}
	else
	{
		printf("given number %d is not a prime no",n);
	}
}