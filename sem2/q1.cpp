#include <stdio.h>
int c(int arr[], int in1) 
{
    int del,k=0, elpos;
     printf("Enter the element to delete : ");
    scanf("%d",&del);
    for (int i = 0; i < in1; i++)
    {
        if (arr[i] == del)
        {
            elpos = i;
            // printf("%d",i);

        }
        else if (arr[i]!=del)
        {
           k=k+1;
        }
        
    }
    if (k == in1)
    {
       printf("wrong\n");
       c(arr,in1);
    }
    // problem
    for (int i = elpos; i < in1; i++)
    {
       arr[i]=arr[i+1];
    }
    // problem
     for (int i = 0; i < in1; i++)
    {
       printf("%d",arr[i]);
    }
    
}
int main()
{
    int ar[50], j, i;
    printf("how many elements : ");
    scanf("%d", &j);
    for (i = 0; i < j; i++)
    {
       scanf("%d",&ar[i]);
    }
   c(ar,j);
    
    return 0;
}