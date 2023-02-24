#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the year:\n");
	scanf("%d",&yr);
	if( (yr%4==0) && (yr%100==0) && (yr%400==0))
	{
		printf("Leap Yr.");
	}
	else if((yr%4==0) && (yr%100!=0))
	{
		printf("Leap Yr.");
	}
	else
	   printf("Not a Leap yr.");
		   
	   
	return 0;   
}
