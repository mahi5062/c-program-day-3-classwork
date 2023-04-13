#include<stdio.h>
int area(int rad)
{
	return 3.14*rad*rad;
}
int main()
{
	int rad,result;
	printf("enter radius of circle");
	scanf("%d",&rad);
	result=area(rad);
	 printf("area of circle have radius %d is %d",rad,result);
    return 0;
}
