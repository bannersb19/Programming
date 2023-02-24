#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three values:\n");
	scanf("%d %d %d",&a,&b,&c);
	int max;
	if((a>b) && (a>c))
	{
		max=a;
	}
	else 
	{
		if((b>a) && (b>c))
		{
		     max=b;
	    }  
		else
		{
			if((c>a) && (c>b))
			{
				max=c;
			}
		}
	}
	printf("Max: %d",max);
	return 0;
}
