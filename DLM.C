#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n;
	printf("enter row and column size of matrix");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("enter elements into matrix a of order %dx%d",m,n);
		for(