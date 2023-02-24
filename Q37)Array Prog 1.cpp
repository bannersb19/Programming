#include<stdio.h>
int main()
{
	int n;
	int a[100];
	printf("\nEnter the limit:");
	scanf("%d",&n);
	printf("\nEnter the elements of array:"); 
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	return 0;
	
}
