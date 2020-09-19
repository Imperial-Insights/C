#include<stdio.h>
void main()
{
	int i,n,n1,r,rev;
	clrscr();
	printf("enter any integer");
	scanf("%d",&n);
	n1=n;
	rev=0;
	while(n1>0)
	{
		r=n1%10;
		rev=(rev*10)+r;
		n1=n1/10;
	}
	printf("the reverse of given no %d is %d",n,rev);
}