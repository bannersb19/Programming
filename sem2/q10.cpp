//conversion of binary to decimal 
#include <stdio.h>
int convert(int num)
{
    int mod, a[50], k = 0;
    while (num > 0)
    {
        a[k] = num % 2;
        num = num / 2;

        k++;
    }
    printf("Corresponding binary number.\n");
    for (int j = k - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    } 
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to convert from decimal to binary : \n");
    scanf("%d", &n);

    convert(n);
    return 0;
}