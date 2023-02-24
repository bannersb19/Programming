#include<stdio.h>
int main()
{
	int a=20,b=10;
	printf("Before swapping a = %d and b = %d",a,b);
	a+=b-=a=b-a;
	/* a=a+b;
	b=a-b;
	a=a-b;*/
	printf("\nAfter swapping again a = %d and b = %d",a,b);
	return 0;
}
