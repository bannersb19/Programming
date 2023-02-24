#include<stdio.h>
int main()
{
	char l;
	int n;
	printf("Enter any letter: \n");
	scanf("%c",&l);
	if(l=='a' || l=='A' || l=='e' || l=='E' || l=='i' || l=='I' || l=='o' || l=='O' || l=='u' || l=='U')
	n=1;
	else
	n=0;
	switch(n)
	{
		case 1:
			printf("The letter entered is a vowel.");
		break;
		
		case 0:
		    printf("The letter entered is a consonant.");
		break;
   }
   
			
		return 0;
			
	}
 
