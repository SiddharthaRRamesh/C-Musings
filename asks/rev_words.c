#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrev(char *); // Prototype

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

//Begin main()

int main()
{
    char sentence[100], rev_sentence[100], c; 
    int j = 0, i = 0, m = 0;

    sentence[i] = ' ';                 // The first char in the sentence should be a space to reverse this first word
    i++;
    printf("Enter a sentence : ");
    while((c = getchar()) != '\n')
    {
        sentence[i] = c;
        i++;
    }
    sentence[i] = '\0';


    printf("Reversed word is: ");


    for(i = strlen(sentence) - 1 ; i >= 0; i = i - 1)
    {
         if(sentence[i] == ' ')
        {
            rev_sentence[j] = '\0'; // because strrev fun reverses string until it encounters a first \0 character
            strrev(rev_sentence);
            printf("%s ", rev_sentence);
            for(m = 0; m < 100; m++)
            rev_sentence[m] = 0;
            j = 0;
            continue;
        }
        rev_sentence[j] = sentence[i];
        j++;
    }

    rev_sentence[j] = '\0';

}
