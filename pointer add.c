#include<stdio.h>
int main()
{
	int a,b,sum;
	int *p1,*p2,*ps;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	ps=&sum;
	
    sum=*p1+*p2;
	printf("the addition of a,b is=%d",sum);
	return 0;
}
