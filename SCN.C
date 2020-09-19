#include<stdio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter value of n to display sq and cubes of natual nos\n");
	scanf("%d",&n);
	printf("___________________________________\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t\t%d\t\t%d\n",i,i*i,i*i*i);
	}
}