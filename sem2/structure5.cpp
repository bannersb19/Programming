#include <stdio.h>
struct student
{
    char Name[50];
    int roll;
    float marks;
} s[10];

int main()
{

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter roll number: ,\n");
        scanf("%d",&s[i].roll);
        printf("Enter first name: ");
        scanf("%s", &s[i].Name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    

    for (int i = 0; i < 5; ++i)
    {
        printf("Roll number: %d\n",s[i].roll);
        printf("First name: ");
        puts(s[i].Name);
        printf("Marks: %f\n", s[i].marks);
    }
    return 0;
}