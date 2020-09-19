/*Armstrong Digit : It is an certain number whose sum of cubes of individual digits is equal to itself
 simple example take 153.....
cubes of individual digits..
1-1
5-125
3=9
add all these you will certainly get 153
programming this in a simple logic of C
*/


#include<stdio.h>
void main()
{
	int i,n,sum,r,n1;
	clrscr();
	printf("enter any interger");
	scanf("%d",&n);
	n1=n;
	sum=0;
	while(n1>0)
	{
		r=n1%10;
		sum=sum+(r*r*r);
		n1=n1/10;
	}
	if(sum==n)
	{
		printf("given no is armstrong no");
	}
	else
	{
		printf("given no is not armstrong");
	}
}
