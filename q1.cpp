#include<stdio.h> 
int main()
{
     int n;
     int a[100];
    
    //Length of the array
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    //Elements of the array
    printf("Input %d number of elements in the array.\n",n);
    for(int i=0;i<n;i++)
    {
	  printf("Element of the array %d : ",i);
	  scanf("%d",&a[i]);
	}
    //print the values of the array   
   printf("\nThe values store into the array are : \n");
   for(int j=0;j<n;j++)
     {
	   printf("% 5d",a[j]);
	 }
     //reverse 
    int b[100];
    int j;
   
   for(int k=n-1;k>=0;k--)
      {
	      b[j]=a[k];
          j++;
	  }
    // reverse ordered print
    printf("\nThe values store into the array in reverse are :\n"); 
    for(int l=0;l<n;l++)
    {
	   printf("% 5d",b[l]); 
	}

   return 0;
} 
