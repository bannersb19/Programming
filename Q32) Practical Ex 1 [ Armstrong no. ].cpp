#include <stdio.h>
int main()
{
    int r,sum,temp;
    int s,e;
    
    printf("Enter the starting limit: ");
    scanf("%d",&s);

    printf("Input ending number of range : ");
    scanf("%d",&e);

    printf("Armstrong numbers in given range are: \n");
    for(int i=s;i<=e;i++)
	{
         temp=i;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==i)
             printf("%d\n ",i);
    }
printf("\n");
return 0; 
}
