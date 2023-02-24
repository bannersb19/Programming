#include <stdio.h>
int maximum(int arr[], int len)
{
    int maxvalue;
    maxvalue = arr[0];
    for (int i = 0; i < len; i++)
    {

        if (arr[i] > maxvalue)
        {
            maxvalue = arr[i];
        }
    }
    return maxvalue;
}
int main()
{
    int a[50], l;
    printf("Enter the length of the of the array : ");
    scanf("%d", &l);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Maximum value out of the array.\n");
    printf("%d", maximum(a,l));

    return 0;
}