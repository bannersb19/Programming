#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:\n");
	scanf("%d",&age);
	if(age <= 30)
	{
		printf("You are YOUNG.");
	}
	else if(age>30 && age<= 56)
	{
		printf("You are neither YOUNG nor OLD");
	}
	else if(age> 56)
	{
		printf("You are OLD");
	}
	return 0;
}
