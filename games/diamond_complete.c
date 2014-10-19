#include <stdio.h>
#include <stdlib.h>

void first(int );
void remain(int, int);
void first(int x)
{
    int i;
    for(i = 1; i < x; i++)
        printf(" ");
    printf("*");

    printf("\n");
}

void remain(int str, int spc)
{
    int i, j;
    if(spc > 0)
    {
        for(i = 0; i < spc; i++)
            printf(" ");
    }

    for(j = 0; j < str; j++)
        printf("*");

    printf("\n");
}

int main()
{
    int inpt;

    printf("Enter: ");
    scanf("%u", &inpt);

    int num_of_stars = 2 * inpt - 1;

    int first_line = (num_of_stars / 2) + 1;

    first(first_line);

    int no_of_loops = 1;
    int spc;
    int str;
    int x = (int) (num_of_stars / 2);
    x-=1;
    int spc_array[100]={0};     // if used variable-sized object it crashes.
    int q = 0;

    while(no_of_loops < inpt)
    {
        str = 2 * no_of_loops++ + 1;
        spc = (num_of_stars - str)  - x;
        spc_array[q++] = x; // This headache for the lower triangle
        x--;
        remain(str, spc);
    }

    int lower_triangle = num_of_stars / 2;
    int i = 0;
    q-=2;
    while(lower_triangle > 1)
    {
                num_of_stars -= 2;
                spc=spc_array[q];
                remain(num_of_stars, spc);
                q--;
                lower_triangle--;
    }
    first(first_line);
    return 0;
}
