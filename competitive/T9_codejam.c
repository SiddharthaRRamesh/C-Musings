#include <stdio.h>

int main()
{
    char c, c1 = NULL;

    while((c = getchar()) != '\n')
    {
        if (c == ' ')printf("0");

        if(c == 'a' || c == 'b' || c == 'c')
        {
           if(c1 == 'a' || c1 == 'b' || c1 == 'c')
           printf(" ");
          if(c == 'a') printf("2");
          if(c == 'b') printf("22");
          if(c == 'c') printf("222");

        }


         if(c == 'd' || c == 'e' || c == 'f')
        {
          if(c1 == 'd' || c1 == 'e' || c1 == 'f')
           printf(" ");
          if(c == 'd') printf("3");
          if(c == 'e') printf("33");
          if(c == 'f') printf("333");


        }

         if(c == 'g' || c == 'h' || c == 'i')
        {
            if(c1 == 'g' || c1 == 'h' || c1 == 'i')
           printf(" ");

          if(c == 'g') printf("4");
          if(c == 'h') printf("44");
          if(c == 'i') printf("444");

        }



         if(c == 'j' || c == 'k' || c == 'l')
        {
            if(c1 == 'j' || c1 == 'k' || c1 == 'l')
           printf(" ");

          if(c == 'j') printf("5");
          if(c == 'k') printf("55");
          if(c == 'l') printf("555");


        }

         if(c == 'm' || c == 'n' || c == 'o')
        {
            if(c1 == 'm' || c1 == 'n' || c1 == 'o')
           printf(" ");

          if(c == 'm') printf("6");
          if(c == 'n') printf("66");
          if(c == 'o') printf("666");


        }

          if(c == 'p' || c == 'q' || c == 'r' || c == 's')
        {
            if(c1 == 'p' || c1 == 'q' || c1 == 'r' || c1 == 's')
           printf(" ");

          if(c == 'p') printf("7");
          if(c == 'q') printf("77");
          if(c == 'r') printf("777");
          if(c == 's') printf("7777");

        }

          if(c == 't' || c == 'u' || c == 'v')
        {
            if(c1 == 't' || c1 == 'u' || c1 == 'v')
           printf(" ");

          if(c == 't') printf("8");
          if(c == 'u') printf("88");
          if(c == 'v') printf("888");


        }

          if(c == 'w' || c == 'x' || c == 'y' || c == 'z')
        {
            if(c1 == 'w' || c1 == 'x' || c1 == 'y' || c1 == 'z')
           printf(" ");
          if(c == 'w') printf("9");
          if(c == 'x') printf("99");
          if(c == 'y') printf("999");
          if(c == 'z') printf("9999");


        }

        c1 = c;
    }
}
