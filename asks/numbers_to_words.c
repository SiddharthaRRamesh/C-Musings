/************************************************ Program that prints numbers in words *******************************************************************
* Name: Siddarth                                                                                                                                         *
* Redirection: Two digits number speller for kids. Yet to be written in Javascript. Creates a colourful menu driven interface in javascript for kids.    *
* Mail: srr_28@outlook.com                           																									 *
* Comments: 'P' refers to portability, when trying this on a diffrent machine alter code with comment P                                                  *
*********************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>

/* Bending away from local pointers and structures to keep source code simple so everyone can work on it */

# define COLOUMNS 80           // coloumnar size of screen. P . screen size independent of O/P screen on each machine.

int main(int argc, char **argv)
{
   // Local declaration

   int number, tenth_place, unit_place;
   int i; //   Variable for creating a menu driven interface.
   char str[100]; // For the kids user name and greet them. For the greet condition look at what the Lead asked. Working on this code. Greet OK

   printf("\n\nEnter your name: ");
   gets(str);

   int len = strlen(str);

   int spaces = len + 2;
   int stars = len + 2;

   int w;                                   // P initialization supported only BY GCC. If not GCC initialize at the begining. Local only to main

   for(w = 0; w < spaces; w++)
     printf("*");

     printf("\n");

   for(w = 0; w < spaces; w++)
   {
       if(w == 0 || w == (spaces - 1))
         printf("*");

       else
         printf(" ");
   }

   printf("\n");

   printf("*%s*", str);

   printf("\n");


      for(w = 0; w < spaces; w++)
   {
       if(w == 0 || w == (spaces - 1))
         printf("*");

       else
         printf(" ");
   }

     printf("\n");

      for(w = 0; w < spaces; w++)
     printf("*");
   
    printf("\n\n\n");

   /********** CREATE A MENU INTRFACE *******************/

   for(i = 0; i < COLOUMNS; i++ ) printf("*");
   printf("*\t\t\t\t\t\t\t\t\t\t*");
   printf("*\t\t\t\t\t\t\t\t\t\t*");
   printf("*\t\t\t\tHELLO! %6.7s \t\t\t\t\t*",str);
   printf("*\t\t\t\t\t\t\t\t\t\t*");
   printf("*\t\t\t\t\t\t\t\t\t\t*");
   for(i = 0; i < COLOUMNS; i++ ) printf("*");

  /******************* END MENU INTERFACE **************/


  /****** Asking the user for two digits and storing them **********/
   for(;;){
   printf("Enter a 2 digit number: ");
   scanf("%2d", &number);                                 // Selects just first two number, therefore %2d

   


   /*********** Do this if the number is in between 11 and 19 ******************/

   if(number >= 10 && number <= 19)                      // The numbers that requires special attention. Numbers from 11 to 19 requires its own spellings.
   {
     switch(number)
     {
       case 10: printf("Ten");
                break;
       case 11: printf("Eleven");
                break;
       case 12: printf("Twelve");
                break;
       case 13: printf("Thirteen");
                break;
       case 14: printf("Fourteen");
                break;
       case 15: printf("Fifteen");
                break;
       case 16: printf("Sixteen");
                break;
       case 17: printf("Seventeen");
                break;
       case 18: printf("Eighteen");
                break;
       case 19: printf("Ninteen");
                break;
     } // END switch for 11 to 19
   } // END if for 11 to 19

  /************ End checking and spelling for numbers between 11 and 19 *******/


  /****** DO this if numbers are from 1 to 10 and 20 to 99 ***/


   else
   {
       tenth_place = number / 10;             // Obtain 10's place single digit number from the user eneterd number.

       switch(tenth_place)                   // Name each of them so they can be prefixed to unit place number.
       {
           case 10: printf("Ten");
                    break;
           case 9: printf("Ninety ");
                    break;
           case 8: printf("Eighty ");
                    break;
           case 7: printf("Seventy ");
                    break;
           case 6: printf("Sixty ");
                    break;
           case 5: printf("Fifty ");
                    break;
           case 4: printf("Fourty ");
                    break;
           case 3: printf("Thirty ");
                    break;
           case 2: printf("Twenty ");
                    break;
       } // END switch for 10, 20, 30 ... 90


     unit_place = number % 10;                // Obtain unit place number


       switch(unit_place)                      // Name from one to 9.
       {
         case  1: printf("one");
                break;
         case  2: printf("two");
                break;
         case  3: printf("three");
                break;
         case  4: printf("four");
                break;
         case  5: printf("five");
                break;
         case  6: printf("six");
                break;
         case  7: printf("seven");
                break;
         case  8: printf("eight");
                break;
         case  9: printf("nine");
                break;
       } // END switch for 1, 2, 3, . . . 9

   } // END else for numbers from 1 to 10 and 20 to 99

   /*** END for number between 1 to 10 and 20 to 99 *****/
   printf("\n");
   }
} // END main
