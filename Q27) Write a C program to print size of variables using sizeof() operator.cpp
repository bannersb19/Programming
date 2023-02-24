#include<stdio.h>
int main()
{
	int a=23;
	float b=23.0f;
	double c=120.056;
	char d= 'D';
	char str[]="Hello";
	
	printf("Size of a = %d",sizeof(a));
	printf("\nSize of b = %d",sizeof(b));
	printf("\nSize of c = %d",sizeof(c));
	printf("\nSize of d = %d",sizeof(d));
	printf("\nSize of str = %d",sizeof(str));
	
	return 0;
	
}
