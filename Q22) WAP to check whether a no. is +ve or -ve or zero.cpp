#include<stdio.h>
int main()
{
	int n;
	int c;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if(n>0)
	c=1;
	else if(n==0)
	c=0;
	else if(n<0)
	c=2;
	switch(c)
	{
		case 1:
			printf("Positive Number.");
		break;
		case 2:
		    printf("Negetive Number.");
		break;
		case 0:
		    printf("Zero.");
		break;			
	}
	return 0;
}
