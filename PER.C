#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5,n6,per;
	clrscr();
	printf("entersix subject marks");
	scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,per);
	per=((n1+n2+n3+n4+n5+n6)/6);
	if(per>=90)
	{
		printf("grade o");
	}
	else
	{
		printf("invalid");
	}
}