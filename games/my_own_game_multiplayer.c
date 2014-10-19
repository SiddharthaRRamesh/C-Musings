#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WINNING_POINT 25
#define MAX_NUM_PLAYERS 10
#define ERR_NO_NUM -1
#define ERR_NO_MEM -2

#define SUFFIX(n)  switch(n)                                                \
                   {                                                        \
                        case 1: printf("st\n");                             \
                        break;                                              \
                                                                            \
                        case 2: printf("nd\n");                             \
                        break;                                              \
                                                                            \
                        case 3: printf("rd\n");                             \
                        break;                                              \
                                                                            \
                        case 4:                                             \
                        case 5:                                             \
                        case 6:                                             \
                        case 7:                                             \
                        case 8:                                             \
                        case 9:                                             \
                        case 10:                                            \
                        printf("th\n");                                     \
                        break;                                              \
                   }                                                        \


void roll();
int is_1(int);
void play_again_messages();
int player_choose(int *);
void suffix(int);

void roll()
{
    int sum = 0, point = 0;
    char ply_agn;

    do
    {
        getchar();
        point = rand() % 7;

        if(point == 0)
         point = is_1(point);

        printf("You rolled %d.\n", point);

        sum = sum + point;

        printf("Your points(s) are: %d\n", sum);

        if(sum == WINNING_POINT)
        {
            printf("\nYou Won! Well Done! Thanks for playing.\n");

            printf("Do You Wanna Play Again?: (Y to continue and any other key to exit):  ");
            scanf("%c", &ply_agn);

            if(ply_agn == 'y' || ply_agn == 'Y')
            {
                printf("\n");
                play_again_messages();
                sum = 0, point = 0;
                roll();
            }

            else
            return;
        }


        if(sum > WINNING_POINT)
        {
            char c;

            printf("\nYou crossed the limit. Sory You have to start over again. :-(.\nPress any key to continue or N to exit.: ");
            scanf("%c", &c);

            if(c == 'n' || c == 'N')
             return;

            else
              play_again_messages();

            sum = 0;
            point = 0;
            getchar();

            roll();
        }

    }while(1);

}

int is_1(int sum)
{
    if(sum == 0)
      return sum + 1;

    else
      return sum;
}

void play_again_messages()
{
    #define NUM_OF_MSGS 5

    int i;

    i = rand() % NUM_OF_MSGS + 1;

    switch(i)
    {
        case 1: printf("Great! Play Again. Have a nice time. Keep Playing! :-)\n\n");
               break;

        case 2: printf("Well Done! Get Addicted!. Play always! :-)\n\n");
               break;

        case 3: printf("You are CRAZYYYY!!!!. Go on and Play On! :-)\n\n");
               break;

        case 4: printf("OMG!!! Ahem mato. Bows and Plays :-)\n\n");
               break;

        case 5: printf("Roll the trumpet and sound the horn :-). Play On!!!\n\n");
               break;

        default: printf("Wow! Nice. Continue. Keep Playing :-)\n\n");              // A nice alternative when i returns 0.
               break;
    }

    return;
}

int myRandom (int size) {
    int i, n;
    static int numNums = 0;
    static int *numArr = NULL;

    // Initialize with a specific size.

    if (size >= 0) {
        if (numArr != NULL)
            free (numArr);
        if ((numArr = malloc (sizeof(int) * size)) == NULL)
            return ERR_NO_MEM;
        for (i = 0; i  < size; i++)
            numArr[i] = i;
        numNums = size;
    }

    // Error if no numbers left in pool.

    if (numNums == 0)
       return ERR_NO_NUM;

    // Get random number from pool and remove it (rnd in this
    //   case returns a number between 0 and numNums-1 inclusive).

    n = rand() % numNums;
    i = numArr[n];
    numArr[n] = numArr[numNums-1];
    numNums--;
    if (numNums == 0) {
        free (numArr);
        numArr = 0;
    }

    return i;
}

int main()
{
    srand((unsigned) time(NULL));
    int turn_allocator[10];


    printf("To Roll the Dice press Enter.\n\n Winning point is %d no more and no less. Best of luck.\n", WINNING_POINT);

    int num_of_players, j = 1, i;

    printf("\n  Enter The Number Of Players: ");
    scanf("%d", &num_of_players);

    char plr_names[num_of_players][50];
    int k, z;

    printf("Enter names of each player: ");
    for(k = 0; k < num_of_players; k++)
    {
        scanf("%s", plr_names[k]);
    }
    k = 0;
    z = 0;

    printf("\n\nPicking Random Orders For Players To Play . . . . . . . \n\nDone!.\n\n");

    i = myRandom (num_of_players);
    while (i >= 0) {
        printf ("Player %s plays %d", plr_names[k], i + 1);
        turn_allocator[z] = i;
        SUFFIX(i+1);
        i = myRandom (-1);
        k++;
        z++;
    }

    k = 0;

    for(i = 0; i < num_of_players; i++)
    {
        printf("\nPlayer %s Press Enter to roll the dice and start playing.", plr_names[turn_allocator[i]]); // error here
        getchar();
        roll();
    }

    return 0;
}
