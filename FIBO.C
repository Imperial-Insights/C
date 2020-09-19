#include<stdio.h>
void main()
{
	int n,n1,n2,n3,count;
	clrscr();
	printf("enter the no of terms to be printed\n");
	scanf("%d",&n);
	printf("the first %d fibonacci terms are\n",n);
	n1=0;
	n2=1;
	printf("%d\t%d\t",n1,n2);
	for(count=3;count<=n;count++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
	getch();
}