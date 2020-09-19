#include<stdio.h>
void main()
{
	int i,n,sum;
	clrscr();
	printf("\tthe perfect nos btw 1 and 1000 are\n");
	for(n=1;n<=1000;n++)
	{
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
			printf("%d\t\t",n);
		}
	}
}