#include<stdio.h>
#include<stdlib.h>
#define MAX 999

int palindrome(int);

int palindrome(int product)
{
    int rem, temp, reversed = 0;
    temp = product;

    while(product != 0)
    {
        rem = product % 10;
        reversed = reversed * 10 + rem;
        product /= 10;
    }

    if(temp == reversed)
        return 1;
    else return 0;
}

int main()
{
    int product, i, j;
    long long big = 0;

    for(i = 100; i <= 999; i++)
    {
        for(j = 100; j  <= 999; j++)
        {
            product = i * j;

            if(palindrome(product))
            {
                if(product > big)
                    big = product;

            }
        }
    }

    printf("%d", big);
}
