#include<stdio.h>
int main()
{
	int no;
	printf("Enter the value:");
	scanf("%d",&no);
	char a;
	a=(no%2==0)?'E':'O';
	printf("The no is: %c",a);
	return 0;
}
