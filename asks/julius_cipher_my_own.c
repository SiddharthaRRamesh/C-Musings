#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char message[100];
    char c;
    int i = 0, shift_amount;

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift_amount);
    getchar();

    printf("Enter message: ");

    while((c = getchar()) != '\n')
    {
        if(!(isalpha(c)))
        {
            message[i] = c;
            i++;
            continue;
        }

         if(c == 'z' || c == 'x' || c == 'y')
        {
            c = ((c - 'a') + shift_amount) % 26 + 'a';
            message[i] = c;
            i++;
            continue;
        }

        if(c == 'Z' || c == 'X' || c == 'Y')
        {
            c = ((c - 'A') + shift_amount) % 26 + 'A';
            message[i] = c;
            i++;
            continue;
        }

        if(c >= 65 && c < 97)
        {
          c = ((c - 'A') + shift_amount)  % 26 + 'A';
          message[i] = c;
          i++;
        }

        else
        {
         c = ((c - 'a') + shift_amount)  % 26 + 'a';
          message[i] = c;
          i++;
        }
    }

    message[i] = '\0';

    puts(message);


}
