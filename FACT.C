#include<stdio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter value of n\n");
	scanf("%d",&n);
	printf("the factors of given number %d are\n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
		}
	}
}