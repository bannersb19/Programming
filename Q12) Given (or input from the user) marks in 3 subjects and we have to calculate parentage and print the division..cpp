#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of three subjects:\n");
	scanf("%d %d %d",&a,&b,&c);
	float per;
	per=((a+b+c)/3);
	if(per>60)
	{
		printf("First Division");
		
	}
	else 
	printf("Second Division\n");
	printf("The percentage: %0.001f",per);
	return 0;
}
