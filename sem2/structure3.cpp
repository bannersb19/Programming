#include <stdio.h>
   struct addition
    {
        float real1,real2,img1,img2;
        
    };
int main()
{
    struct addition adding;
  float sum1, sum2;
    
   printf("Enter the real part of first equation : ");
   scanf("%f",&adding.real1);
   printf("\nEnter the imaginary part of first equation : ");
    scanf("%f",&adding.img1);
   printf("\nEnter the real part of second equation : ");
    scanf("%f",&adding.real2);
   printf("\nEnter the imaginary part of second equation : ");
    scanf("%f",&adding.img2);
    sum1 = (adding.real1 + adding.real2);
    sum2 = (adding.img1 + adding.img2);
    printf("sum = %f + (%f)i",sum1,sum2);
    return 0;
}S