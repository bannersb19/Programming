#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter any natural number:\n");
	scanf("%d",&n);
	printf("\nNatural numbers from %d to %d:\n", i, n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
