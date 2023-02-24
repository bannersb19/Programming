#include <stdio.h>
   struct dis
    {
        float num1,num2;
        
    };
int main()
{
    struct dis dis1;
  float distance;
    
    printf("enter the first distance : ");
    scanf("%f", &dis1.num1);
    printf("enter the second distance : ");
     scanf("%f", &dis1.num2);
     
     printf("%f",dis1.num1+dis1.num2);
    return 0;
}