#include<stdio.h>
void main()
{
	int i,n,f;
	printf("enter value of n\n");
	scanf("%d",&n);
	f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of given number %d is %d",n,f);
}