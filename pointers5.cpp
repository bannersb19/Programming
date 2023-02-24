#include<stdio.h>
int swapnumbers(int *x,int *y);
int main()
{
    int a,b,c;

    printf("Enter Two Values: ");
    scanf("%d %d",&a,&b);
    swapnumbers(&a,&b);
   
    return 0;
}
int swapnumbers(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y = z;
  printf("swapped values = %d, %d", *x, *y);
  return 0;
}