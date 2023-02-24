#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the natural no: \n");
	scanf("%d",&n);
	i=0;
	int sum=0, sum1=0;
	while(i<=n)
	{
		switch(i%2)
		{
			case 0:
			sum=sum+i;
			break;
			
			default:
			sum1=sum1+i;
			break;
	    }
		i++;		
	}
	printf("Even Numbers\n");
    printf("The Sum: %d \n",sum);
    
	printf("Odd Numbers\n");
	printf(" The Sum: %d\n",sum1);
	
	return 0;		
}

