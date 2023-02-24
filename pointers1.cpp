#include<stdio.h>
int addnumbers(int *x,int *y);
int main()
{
    int a,b;
    int sum;

    printf("Enter Two Values: \n");
    scanf("%d %d",&a,&b);
    sum=addnumbers(&a,&b);
    printf("Sum of the two numbers are: %d",sum);
    return 0;
}
int addnumbers(int *x,int *y)
{
    int z;
    z=*x+*y;
  
    return z;
}