#include<stdio.h>
int area(int rad)
{
	return 2*3.14*rad;
}
int main()
{
	int rad,result;
	printf("enter radius of circle");
	scanf("%d",&rad);
	result=area(rad);
	 printf("circumference of circle have radius %d is %d",rad,result);
    return 0;
}
