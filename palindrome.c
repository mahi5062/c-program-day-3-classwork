#include<stdio.h>
int main()
{
	int n,reverse=0,reminder,original;
	printf("enter any intger");
	scanf("%d",&n);
	original=n;
	while (n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n/=10;
	}
	if (original==reverse)
	{
		printf("%d is palindrome",original);
	}
	else
	{
		printf("%d is not a palindrome",original);
	}
	return 0;
}
