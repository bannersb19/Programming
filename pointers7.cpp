#include <stdio.h>
#include <string.h>
void cPosition(char *ch1, char *ch2)
{
char temp;
temp = *ch1;
*ch1 = *ch2;
*ch2 = temp;
}
void charPermu(char *ch, int stn, int endno)
{
int i;
if(stn==endno)
{
printf("%s ", ch);
}
else
{
for (i = stn;i<=endno;i++)
{
cPosition((ch+stn), (ch+i));
charPermu(ch, stn+1, endno);
cPosition((ch+stn), (ch+i));
}
}
}
int main()
{
char st[] = "ball";
int n=strlen(st);
printf("The permutations are\n");
charPermu(st, 0, n-1);
return 0;
}