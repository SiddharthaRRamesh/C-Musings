/* The craps game, KN king page 218 */

#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int roll_dice(void)
{
    int roll;

    getchar();
    srand((unsigned) time(NULL));

    roll = rand() % 13;

    if(roll == 0)
    roll = roll + 1;

    return roll;
}

bool play_game()
{
    int sum = 0, wins = 0, loss = 0, point;

    sum = roll_dice();

    printf("You rolled: %d", sum);

    if(sum == 7 || sum == 11)
    {
        printf("\nYou won!\n");
        return true;
    }

    if(sum == 2 || sum == 3 || sum == 12)
    {
        printf("\nYou lost!!");
        return false;
    }

    point = sum;

    printf("\n\nYour point is: %d", point);

    do
    {
        sum = roll_dice();
        printf("\nYou rolled: %d", sum);

    }while(sum != point);

    if(sum == point)
    {
        printf("\nYou won!!!");
        return true;
    }

}

int main()
{
    char c, wins = 0, losses = 0;
    bool check;

    do
    {
        check = play_game();

        if(check == true)
          wins++;

        else if(check == false)
          losses++;

        printf("\nPlay Again? ");
        scanf("%c", &c);

    }while(c == 'Y' || c == 'y');

    printf("\nWins: %d      Losses: %d", wins, losses);

    return 0;
}
