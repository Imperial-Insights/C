//This is a basic code to add two integers

#include<stdio.h>
void main()
{
	int n1,n2,add;
	clrscr();
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	printf("addition of %d and %d is %d",n1,n2,add);
}
