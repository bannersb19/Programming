#include<stdio.h>
int main()
{
	int n, max, a,b;
	printf("Enter the value of the first number:");
	scanf("%d",&a);
	printf("Enter the value of the second number:");
	scanf("%d",&b);
	if(a>b)
	n=1;
	else
	n=0;
	switch(n)
	{
		case 1:
			printf("The first number is greater than the second.");
		break;
		
		case 0:
		     printf("The second number is greater than the first.");
		break;

	}
	
	return 0;
}
