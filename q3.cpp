#include <stdio.h>
#include <string.h>
int main()
{

   //input of array
   char str[20];
   printf("\nEnter the password to check whether it's valid or not:\n");
   gets(str);
   int found;
   int found1;
   int found2;
   for (int i = 0; i < strlen(str); i++)
   {
      for (char a = 'A'; a <= 'Z'; a++)
      {
         if (str[i] == a)
         {
            found1 = 1;
         }
      }
   }
   //if (found == 1)
     // printf("The password contains atleast one Uppercase letter.\n");
   
   for (int i = 0; i < strlen(str); i++)
   {
      for (char a = 'a'; a <= 'z'; a++)
      {
         if (str[i] == a)
         {
            found = 0;
         }
      }
   }
   //if (found == 0)
     // printf("The password contains atleast one Lowercase letter.\n");

   for (int i = 0; i < strlen(str); i++)
   {
      for (char j = '1'; j <= '9'; j++)
      {
         if (str[i] == j)
         {
            found2 = 2;
         }
      }
   }
   //if (found == 2)
      //printf("The password contains atleast one digit.\n");

   if (found == 0 && found1 == 1 && found2 == 2)
   {
      printf("The password is valid.\n");
   }
   else
   {

      printf("Error.\n");
      if (found != 0)
      {
         printf("Lorem Ipsum 0");
      } 

      if (found1 != 1)
      {
         printf("Lorem Ipsum 1");
      }

      if (found2 != 2)
      {
         printf("Lorem Ipsum 2");
      }
   }

   return 0;
}