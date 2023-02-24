#include<stdio.h>
int main()
{
	int marks;
	char gr;
	printf("Enter the value of marks:\n");
	scanf("%d",&marks);
	if(marks>=70)
	{
		gr='A';
	}
	else if(marks>=60)
	{
		gr='B';
	}
	else if(marks>=50)
	{
		gr='C';
	}
	else
	{
		gr='F';
	}
	printf("Grade: %c",gr);
	return 0;
}
