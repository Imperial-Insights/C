#include<stdio.h>
void main()
{
	int i,n,count,limit;
	clrscr();
	printf("enter limit");
	scanf("%d",&limit);
	printf("the prime nos between 1 and %d are",limit);
	for(n=1;n<=limit;n++)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d\t\t",n);
		}
	}
}