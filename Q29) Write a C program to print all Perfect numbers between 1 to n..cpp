#include <stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 to %d:\n", n);
    
    
    for(int i=1; i<=n; i++)
    {
        
       sum=0;
        for(int j=1; j<i; j++)
        {
		
            if(i % j == 0)
            {
                sum += j;
            }
        }
       
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
