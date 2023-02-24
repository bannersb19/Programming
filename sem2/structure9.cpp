#include <stdio.h>
#include <string.h>
struct books
{
    char title[10];
    char Author[10];
    char Subject[10];
};
struct books display(struct books dis)
{
    printf("\nTitle = %s", dis.title);
    printf("\nAuthor = %s", dis.Author);
    printf("\nSubjact = %s", dis.Subject);
}
struct books strcp(struct books dis1)
{
    struct books dis2;
    strcpy(dis2.Author, dis1.Author);
    strcpy(dis2.title, dis1.title);
    strcpy(dis2.Subject, dis1.Subject);
    return dis2;
}
int main()
{
    struct books det, det1;

    printf("enter the title : ");
    scanf("%s", det.title);
    printf("enter the name of the Author : ");
    scanf("%s", det.Author);
    printf("enter the Subject : ");
    scanf("%s", det.Subject);
    det1 = strcp(det);
    display(det1);
    return 0;
}