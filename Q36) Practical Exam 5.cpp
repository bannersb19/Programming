#include <stdio.h>

int main() 
{
   int j,k=0;
   printf("Input the number of terms : ");
   scanf("%d",&j);
   printf("\nThe square natural upto %d terms are : ",j);
   for(int i=1;i<=j;i++) {
     printf("%d  ",i*i);
     k+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",j,k);
   return 0;
}
