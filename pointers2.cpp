#include <stdio.h>
int main()
{
    int a, b;
    int *a1, *b2;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    a1 = &a;
    b2 = &b;
    if(*a1 > *b2)
    {
	printf("The greater number is %d", *a1);
    }
    else if (*b2 > *a1) {
        printf("The greater number is %d", *b2);
    }    
    else {
        printf("Both are equal");
    }
    return 0;
}