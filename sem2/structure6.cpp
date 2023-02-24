#include <stdio.h>
struct student
{
    char Name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int l;
    printf("Enter the no.of students you want to enter : \n");
    scanf("%d",&l);

    for (int i = 0; i < l; ++i)
    {
        printf("Enter roll number: \n");
        scanf("%d",&s[i].roll);
        printf("Enter first name: ");
        scanf("%s", &s[i].Name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    

    for (int i = 0; i < l; ++i)
    {
        printf("Roll number: %d\n",s[i].roll);
        printf("First name: ");
        puts(s[i].Name);
        printf("Marks: %f\n", s[i].marks);
    }
    return 0;
}