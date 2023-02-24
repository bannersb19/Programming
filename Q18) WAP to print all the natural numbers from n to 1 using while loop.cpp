#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any natural number:\n");
	scanf("%d",&n);
	printf("\nNatural numbers from %d to %d:\n", n, i);
	i=n;
	printf("i = %d \n",i);
	while(i>=1)
	{
		printf("%d\n",i);
		i--;
		
	}
	return 0;
}
