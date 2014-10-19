// Encryption xor.c

#include<stdio.h>
#include<ctype.h>

#define KEY '&'


int main(int argc, char **argv)
{
    char orig_char, new_char;

    puts("Enter a secret message: ");
    getchar();
    puts("Encrypted message is: ");

    while((orig_char = getchar()) != '\n')
    {
        new_char = orig_char ^ KEY;

        if(isprint(orig_char) && isprint(new_char))
            putchar(new_char);
        else
            putchar(orig_char);

    }
}
