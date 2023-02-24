// print all the unique elements 
#include <stdio.h>
int main()
{
    int a[100], l = 0, k = 0, s = 0;
    int b[100];
    int c[100];
    printf("Enter the length of the of the array : ");
    scanf("%d", &l);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("UNIQUE ELEMENTS:\n");
    for (int j = 0; j < l ; j++)
    {
        // for (int h = (j + 1); h < l; h++)
        // {
            if (a[j] != a[j+1])
            {
                b[k] = a[j];
                k++;
            }
            // else
            // {
            //     c[s] = a[j];
            //     s++;
            // }

        // }

       
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d", b[i]);
    }
    // for (int i = 0; i < s; i++)
    // {
    //     printf("\n%d", c[i]);
    // }

    return 0;
}