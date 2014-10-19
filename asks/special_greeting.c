#include <stdio.h>
#include <stdio.h>

int main()
{
    char str[100];

   printf("Enter your name: ");
   gets(str);

   int len = strlen(str);

   int spaces = len + 2;
   int stars = len + 2;

   int i;

   for(i = 0; i < spaces; i++)
     printf("*");

     printf("\n");

   for(i = 0; i < spaces; i++)
   {
       if(i == 0 || i == (spaces - 1))
         printf("*");

       else
         printf(" ");
   }

   printf("\n");

   printf("*%s*", str);

   printf("\n");


      for(i = 0; i < spaces; i++)
   {
       if(i == 0 || i == (spaces - 1))
         printf("*");

       else
         printf(" ");
   }

     printf("\n");

      for(i = 0; i < spaces; i++)
     printf("*");

   return 0;
}
