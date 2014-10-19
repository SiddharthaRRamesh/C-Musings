/* Guess the number.
 *
 * Programmer -- Siddhartha Ramesh
 * Licence -- GPL V3
 *
 * Having a nice time playing or hacking on this
 *
 */

/* Standard Libraries */
#include <stdio.h>   // input and output
#include <stdlib.h>  // exit()
#include <time.h>    // srand(), rand()

#define MAX_NUMBER 20
#define MIN_NUMBER 1

/* Prototypes */
void choose_random(unsigned int *);
void guess_random(const unsigned int *);
void greet();

/* Greet the user */
void greet()
{
    char *s[]={'\0'};
    printf("Hello! What is your name?\n");
    scanf("%s", &s);
    printf("\nWell %s, I am thinking of a number between %d and %d.", s, MIN_NUMBER, MAX_NUMBER);
}

/* Choose a random number and copy it to guessed */
void choose_random(unsigned int *guessed)
{
    *guessed = rand() % MAX_NUMBER;
}

void guess_random(const unsigned int *guessed)
{
    unsigned int temp;
    unsigned short turns = 0;

    while(1)
    {
        printf("\nTake a guess: ");
        scanf("%d", &temp);
        if(temp != '\n')
        {
            if(temp < *guessed)
            {
                printf("Your guess is too low. Keep Trying.\n");
                turns++;
                continue;
            }
            else if(temp > *guessed)
            {
                printf("Your guess is too high. Keep Trying.\n");
                turns++;
                continue;
            }
            else
            {
                printf("\nGood job! You did it in %d guesses.\n", turns);
            }
        }

    }
}

/* Begin here -- Main */

int main()
{
    srand((unsigned) time(NULL));
    unsigned int guessed = 0;

    /* Greet the user */
    greet();

    /* Initialize guessed to a random number */
    choose_random(&guessed);

    /* Guess the random number */
    guess_random(&guessed);

    return 0;
}

