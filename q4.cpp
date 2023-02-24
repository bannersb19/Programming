#include <stdio.h> 
int main() 
{ 
 int n,s=4,a,j; 
 printf("Enter n:"); 
 scanf("%d",&n); 
 j=s+4-1;
 for(int i=1;i<=n;i++) 
 { 
     for(a=j;a>=1;a--)
            {
              printf(" ");
            }
  for(int j=1;j<=i;j++) 
  printf("%d ",i); 
  printf("\n"); 
j--; 
 } 
 return 0;
}