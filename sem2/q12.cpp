#include <stdio.h>
int delete1(int arr[], int in1)
{
    int del, k = 0, elpos;
    printf("Enter the element to delete : ");
    scanf("%d", &del);
    for (int i = 0; i < in1; i++)
    {
        if (arr[i] == del)
        {
            elpos = i;
        }
        else if (arr[i] != del)
        {
            k = k + 1;
        }
    }
    if (k == in1)
    {
        printf("wrong\n");
        delete1(arr, in1);
    }

    for (int i = elpos; i < in1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < in1 - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
int main()
{
    int arr[50], l, i;
    printf("Enter the length of the of the array : ");
    scanf("%d", &l); 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }
    delete1(arr, l);

    return 0;
}