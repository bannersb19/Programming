#include <stdio.h>
struct student
{
    char name[10];
    int ID;
    int Salary;

    struct Address
    {
        char addr[100];
    };
    struct Address adr;
};
int main()
{
    int num;
    struct student s1[10];
    printf("Enter the number of the students : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("\nenter the ID NAME SALARY ADDRESS : ");
        scanf("%d", &s1[i].ID);
        scanf("%s", &s1[i].name);
        scanf("%d", &s1[i].Salary);
        scanf("%s", &s1[i].adr.addr);
    }
    for (int i = 0; i < num; i++)
    {
        printf("\nName = %s, ID = %d, Salary = %d, Address = %s", s1[i].name, s1[i].ID, s1[i].Salary, s1[i].adr.addr);
    }

    return 0;
}