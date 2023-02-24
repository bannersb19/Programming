#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Enter the value of the first variable:");
	scanf("%d",&a);
	printf("Enter the value of the second variable:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValue of the first variable: %d",a);
	printf("\nValue of the second variable: %d",b);
	return 0;
}
