//sorting in asending order 
#include <stdio.h>    
     
int main()    
{    
       
    int a[100],l=0;     
    printf("Enter the no.of elements of the array:");
    scanf("%d",&l);   
        
    
     printf("Enter the elements: \n");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
   
        
     
    for (int i = 0; i < l; i++) {     
        for (int j = i+1; j < l; j++) {     
           if(a[i] > a[j]) 
           {    
               int temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
       
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < l; i++) {     
        printf("%d ", a[i]);    
    }    
    return 0;    
}     