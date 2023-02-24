//swappimg of numbers using call by reference 
#include<stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int a=0,b=0;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("BEFORE SWAPPING NOS \n");
    printf("1st Number : %d \n",a);
    printf("2nd Number : %d \n",b);

    swap(&a,&b);
 
    printf("\nAFTER SWAPPING NOS \n");
    printf("1st Number : %d \n",a);
    printf("2nd Number : %d \n",b);

   
   return 0;
}