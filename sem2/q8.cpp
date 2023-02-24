//factorial using recursion 
#include <stdio.h>
int factorial(int fact) 
{
    if (fact == 1 || fact == 0) 
    {
        return 1;
    }
    else
    {
         
             return(fact*factorial(fact-1));
         
    }
    
}
int main()
{
    int a;
    printf("Enter the number : \n");
    scanf("%d",&a);
    printf("Factorial of a number: %d", factorial(a));
    return 0;
}