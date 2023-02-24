//array in reverse order 
#include <stdio.h>

int main()
{
    int a[100],l=0;

    
    printf("Enter size of the array: ");
    scanf("%d", &l);

    
    printf("Enter elements in array: \n");
    for(int i=0; i<l; i++)
    {
        scanf("%d", &a[i]);
    }

    
    printf("\nArray in reverse order: ");
    for(int i = l-1; i>=0; i--)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}