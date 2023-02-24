#include<stdio.h>
int factnumbers(int *x);
int main()
{
    int a,b,c;

    printf("Enter the value: ");
    scanf("%d",&a);
    int factori = factnumbers(&a);
   printf("%d", factori);
    return 0;
}
int factnumbers(int *x)
{  
      int i,fact=1;    
 
    for(i=1;i<=*x;i++){    
      fact=fact*i;    
  }
   return fact;
}