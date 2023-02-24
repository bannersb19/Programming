#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter any value: ");
    scanf("%d",&n);
    x=1;
    for(int i=1;i<=n;i++)
    {
        for (int j=n;j>=i;j--)
        {
            printf(" ");
        } 
        for(int k=1;k<=i;k++)    
        {
            printf("%d ",x++);
        }
       
        printf("\n");
        
    }

   
return 0;
}