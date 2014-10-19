#include <stdio.h>
#include <string.h>

void to_string(char , char [], int);
void to_alphanum(char , char[], int);
void to_num(char , char[], int);


void to_string(char ch, char string_array[], int index)
{
    string_array[index] = ch;
}

void to_alphanum(char ch, char alphanum_array[], int index)
{
    alphanum_array[index] = ch;
}

void to_num(char ch, char num_array[], int index)
{
    num_array[index] = ch;
}

int main()
{
    char string[250], number[250], alphanum[250], read[250];
    char ch;
    int counter_to_string = 0;
    int counter_to_alpha = 0;
    int counter_to_num = 0;

    int i, j, k;

    while((ch = getchar()) != '\n')
    {
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            to_string(ch, string, counter_to_string);
            counter_to_string++;
        }

        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            to_alphanum(ch, alphanum, counter_to_alpha);
            counter_to_alpha++;
        }

        if(ch >= 48 && ch <= 57)
        {
            to_alphanum(ch, alphanum, counter_to_alpha);
            counter_to_alpha++;
        }

        if(ch >= 48 && ch <= 57)
        {
            to_num(ch, number, counter_to_num);
            counter_to_num++;
        }

        if(ch == ' ')
        {
            to_string(ch, string, counter_to_string);
            counter_to_string++;

            to_num(ch, number, counter_to_num);
            counter_to_num++;

            to_alphanum(ch, alphanum, counter_to_alpha);
            counter_to_alpha++;

        }
    }

    printf("\n\nGetAllString Returns:");

    for(i = 0; i < counter_to_string; i++)
        printf("%c", string[i]);

    printf("\n\n\nGetAllAlphaNum Returns: ");

    for(j = 0; j < counter_to_alpha; j++)
        printf("%c", alphanum[j]);

    printf("\n\n\nGetAllNum Returns: ");

    for(k = 0; k < counter_to_num; k++)
        printf("%c", number[k]);
}
