#include<stdio.h>
int main()
{
	int a;
	int *p;
	printf("enter any integer");
	scanf("%d",&a);
	p=&a;
	printf("\n value of integer:%d",a);
	printf("\n value of integer:%d",*p);
	printf("\n value of integer:%d",*(&a));
	printf("\n addres of integer:%u",p);
	printf("\n addres of integer:%u",&a);
	return 0;
}
