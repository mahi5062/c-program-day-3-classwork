#include<stdio.h>
int main()
{
	int a,b,temp;
	int *p1,*p2;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	printf("before swapping the two number is %d,%d",*p1,*p2);
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("the two number after swapping is %d,%d",*p1,*p2);
	return 0;
	
}
