#include <stdio.h>


int main()
{
    long long squares_of_sum = 0;
    unsigned long int sum_of_squares = 0;
    int i;

    for(i = 1; i <= 100; i++)
        squares_of_sum = squares_of_sum + i;

    for(i = 1; i <= 100; i++)
    {
        sum_of_squares = sum_of_squares + i * i;
    }

    printf("%d", (squares_of_sum * squares_of_sum) - sum_of_squares);

    return 0;


}
