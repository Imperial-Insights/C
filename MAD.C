#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
	clrscr();
	printf("enter row and column size of matrix A\n");
	scanf("\t%d%d",&m,&n);
	printf("enter row and column size of matrix B\n");
	scanf("\t%d%d",&p,&q);
	if(m==p&&n==q)
	{
		printf("addition of matrics A and B is possible\n");
		printf("enter elements into matrix A of order %dx%d\n",m,n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d\t",&a[i][j]);
			}
		}
		printf("enter elements into matrix B of orde %dx%d\n",p,q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d\t",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("elements of matrix A are\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("elements of matrix B are\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		printf("elements of matrix C are\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("addition of matrix A and B is not possible");
	}
}