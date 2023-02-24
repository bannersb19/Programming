#include<stdio.h>
int fact(int l)
{
	int f=1;
	for(int j=1;j<=l;j++)
	{
		f=f*j;
	}
	return f;
}
int main()
{
	int limit,a;
	float sum1=0,sum2=0,sum=0;
	printf("Enter the value of limit:\n");
	scanf("%d",&limit);
	printf("Enter the value of X:\n");
	scanf("%d",&a);
	for(int i=0;i<=limit;i+=4)
	{ 
	    printf("%d\n",i);
	    sum1=sum1+((a^i)/fact(i)); 
	    printf("Sum 1: %f\n",sum1);
	    int g=fact(i);
	    printf("factorial : %d\n",g);
	}
	for(int k=2;k<=limit;k+=4)
	{
		sum2=sum2-((a^k)/fact(k));
		printf("Sum 2: %f\n",sum2);
	}
	
	sum=sum1+sum2;
	
	printf("Sum of the series = %f\n",sum);
	printf("The no. of terms = %d\n",limit);
	printf("X = %d\n",a);
	return 0;
}
