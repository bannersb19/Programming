#include<stdio.h>
int main()
{
	int n,p=1;
	printf("Enter a number: \n");
	scanf("%d",&n);
	while(n>0)
	{
		int d=n%10;
		p=p*d;
		n=n/10;
    }
    
    printf("Product :%d",p);
    return 0;
}
