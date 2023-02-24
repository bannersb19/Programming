#include<stdio.h>
      
int main()
{
    int s,u;
    char str[100], j;
    
    printf("Enter the String : ");
    gets(str);

    for(j=0; str[j]!='\0'; ++j);
    printf("\nReversed string is: \n");

    for(s=j-1;s>=0;s--){
       printf("%c",str[s]);
    }
    return 0;
}   