#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num1 = 0, random_num2 = 0;

    srand((unsigned) time(NULL));

    printf("Press enter to roll the dice.");
    getchar();

    random_num1 = rand() % 7;
    if(random_num1 == 0)
    random_num1 = random_num1 + 1;
    printf("\nFirst dice rolled out to: %d", random_num1);

    random_num2 = rand() % 7;
    if(random_num2 == 0)
    random_num2 = random_num2 + 1;
    printf("\nSecond dice rolled out to: %d", random_num2);

    printf("\nTotal moves to make is %d", random_num1 + random_num2);

    return 0;

}

