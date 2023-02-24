#include<stdio.h>
int main()
{
	int n,rev,c;
	printf("Enter a number: \n");
	scanf("%d",&n);
	while(n>0)
	{
		int d=n%10;
		n=n/10;
		c++;
		rev=rev+d*(10^c);
    }
    
    printf("Reverese: %d",rev);
    return 0;
}
