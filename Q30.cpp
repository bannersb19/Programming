#include<stdio.h>  		  

int main()			
{
    char ch;
    printf("Enter the charcter\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >=97 )
    {
        printf("The character is lower case");
    }
    else
    {
        printf("The character is upper case");

    }
    
    return 0;
}
