#include <stdio.h>
int main()
{
   int sum, firstnum, secondnum, *f, *s;
   printf("Enter two integers to add\n");
   scanf("%d%d", &firstnum, &secondnum);
   f = &firstnum;
   s = &secondnum;
   sum = *f + *s;
   printf("Sum of those numbers(Using Pointers) = %d\n", sum);

   return 0;
}