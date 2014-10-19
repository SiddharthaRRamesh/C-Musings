#include <stdio.h>
#include <string.h>

int alphanum_index = 0;
int string_index = 0;
int num_index = 0;

void compare(char [], char [], char [], char []);
void alphanum(char [], char []);
void string(char [], char []);
void num(char [], char []);
void clear_read_array(char []);

void clear_read_array(char read_array[])
{
   int i;
   int length = strlen(read_array);

   for(i = 0; i < length; i++)
        read_array[i] = '\0';
}

void alphanum(char read_array[], char to_alphanum[])
{
    int length = strlen(read_array);
    int i;

    for(i = 0; i < length; i++)
    {
        to_alphanum[alphanum_index] = read_array[i];
        alphanum_index++;
    }

    clear_read_array(read_array);
}

void string(char read_array[], char to_string[])
{
    int length = strlen(read_array);
    int i;

    for(i = 0; i < length; i++)
    {
        to_string[string_index] = read_array[i];
        string_index++;
    }

    clear_read_array(read_array);
}

void num(char read_array[], char to_num[])
{
    int length = strlen(read_array);
    int i;

    for(i = 0; i < length; i++)
    {
        to_num[num_index] = read_array[i];
        num_index++;
    }

    clear_read_array(read_array);
}


void compare(char read_array[], char to_alphanum[], char to_num[], char to_string[])
{
    int length = strlen(read_array);
    int i;
    int contains_letters = 0;
    int contains_numbers = 0;
    int contains_both = 0;

    for(i = 0; i < length; i++)
    {
        if((read_array[i] >= 65 && read_array[i] <= 90) || (read_array[i] >= 97 && read_array[i] <= 122))
            contains_letters = 1;

        if(read_array[i] >= 48 && read_array[i] <= 57)
            contains_numbers = 1;

        if(contains_letters == 1 && contains_numbers == 1)
        {
            alphanum(read_array, to_alphanum);
            return;
        }
    }

    if(contains_letters == 1)
        string(read_array, to_string);

    if(contains_numbers == 1)
        num(read_array, to_num);

}
int main()
{
    char ch;
    char read[250];
    char to_alphanum[250];
    char to_num[250];
    char to_string[250];
    int read_index = 0;

    int i, j, k;


    while((ch = getchar()) != '\n')
    {
        if(ch == ' ')
        {
            read[read_index] = ' ';
            compare(read, to_alphanum, to_num, to_string);
            read_index = 0;
        }

        else
        {
            read[read_index] = ch;
            read_index++;
        }
    }

    printf("GetAllAlphanum returns: ");
    for(i = 0; i < alphanum_index; i++)
        printf("%c", to_alphanum[i]);
        printf("\n\n");

    printf("GetAllString returns: ");
    for(j = 0; j < string_index; j++)
        printf("%c", to_string[j]);
        printf("\n\n");

    printf("GetAllNum returns: ");
    for(k = 0; k < num_index; k++)
        printf("%c", to_num[k]);

}
