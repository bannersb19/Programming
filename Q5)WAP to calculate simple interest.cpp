#include<stdio.h>
int main()
{
	int p,r,t;
	float s;
	printf("Enter the value of principle amount:");
	scanf("%d",&p);
	printf("Enter the value of rate: ");
	scanf("%d",&r);
	printf("Enter the value of time: ");
	scanf("%d",&t);
	s=(p*r*t)/100;
	printf("Simple Interest: %f",s);
	
	return 0;
} 
