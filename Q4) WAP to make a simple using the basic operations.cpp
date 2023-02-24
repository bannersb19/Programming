#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul;
	float div;
	printf("Enter the two values:");
	scanf("%d",&a);
	scanf("%d",&b);

	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("\nSum = %d",sum);
	printf("\nSubraction = %d",sub);
	printf("\nMultiplication = %d",mul);
	printf("\nDivision = %f",div);
	
	return 0;
}
